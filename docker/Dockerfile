ARG TAG

FROM ubuntu:bionic
LABEL maintainer="Skicoin Developers"
LABEL tag=${TAG}

RUN apt-get update
RUN apt-get install -y software-properties-common 

RUN add-apt-repository ppa:bitcoin/bitcoin
RUN apt-get update
RUN apt-get install -y git build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils python3
RUN apt-get install -y libboost-all-dev libdb4.8-dev libdb4.8++-dev libminiupnpc-dev libzmq3-dev libqrencode-dev
RUN apt-get install -y libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler

ADD https://api.github.com/repos/skicoin/skicoin/git/refs/tags/${TAG} version.json
RUN git clone https://github.com/skicoin/skicoin
WORKDIR /skicoin
RUN ./autogen.sh
RUN ./configure
RUN make -j4 
RUN strip src/skicoind
RUN strip src/skicoin-cli

FROM ubuntu:bionic

RUN apt-get update
RUN apt-get install -y software-properties-common 
RUN add-apt-repository ppa:bitcoin/bitcoin
RUN apt-get update
RUN apt-get install -y libzmq5 libboost-system1.65.1 libboost-filesystem1.65.1 libboost-program-options1.65.1 libboost-thread1.65.1 libboost-chrono1.65.1
RUN apt-get install -y libdb4.8 libdb4.8++
RUN apt-get install -y libminiupnpc10 
RUN apt-get install -y libevent-pthreads-2.1 libevent-2.1

COPY --from=0 skicoin/src/skicoind .
COPY --from=0 skicoin/src/skicoin-cli .

ENTRYPOINT ["./skicoind", "-printtoconsole", "-datadir=/data"] 