#!/bin/bash

TOPDIR=${TOPDIR:-$(git rev-parse --show-toplevel)}
BUILDDIR=${BUILDDIR:-$TOPDIR}

BINDIR=${BINDIR:-$BUILDDIR/src}
MANDIR=${MANDIR:-$TOPDIR/doc/man}

SKICOIND=${SKICOIND:-$BINDIR/skicoind}
SKICOINCLI=${SKICOINCLI:-$BINDIR/skicoin-cli}
SKICOINTX=${SKICOINTX:-$BINDIR/skicoin-tx}
SKICOINQT=${SKICOINQT:-$BINDIR/qt/skicoin-qt}

[ ! -x $SKICOIND ] && echo "$SKICOIND not found or not executable." && exit 1

# The autodetected version git tag can screw up manpage output a little bit
BTCVER=($($SKICOINCLI --version | head -n1 | awk -F'[ -]' '{ print $6, $7 }'))

# Create a footer file with copyright content.
# This gets autodetected fine for skicoind if --version-string is not set,
# but has different outcomes for skicoin-qt and skicoin-cli.
echo "[COPYRIGHT]" > footer.h2m
$SKICOIND --version | sed -n '1!p' >> footer.h2m

for cmd in $SKICOIND $SKICOINCLI $SKICOINTX $SKICOINQT; do
  cmdname="${cmd##*/}"
  help2man -N --version-string=${BTCVER[0]} --include=footer.h2m -o ${MANDIR}/${cmdname}.1 ${cmd}
  sed -i "s/\\\-${BTCVER[1]}//g" ${MANDIR}/${cmdname}.1
done

rm -f footer.h2m
