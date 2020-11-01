Skicoin Core staging tree 
=========================

`master:` [![Build Status](https://travis-ci.org/skicoin/skicoin.svg?branch=master)](https://travis-ci.org/skicoin/skicoin) 

http://www.abseits.ski

What is Skicoin?
----------------

Coin specs

SPECIFICTIONS:
• Name:               Skicoin 
• Algorithm:          Scrypt Proof of Work
• Block:              60 seconds using Dark Gravity Wave(24) 
• Ticker:             SKI
• Block size:         6mb
• P2P Port:           8181
• RPC Port:           8182
• Prune height:   1,000,000
• Max supply:     12,500,000 *  
• Premined:  625,000 (5 %)
  - for development , marketing, and exchange listings 
• Hybrid layer 2 PoW/PoS consensus with bonded validator system (masternodes)
• Decentralized identity reservation, ownership, and exchange
• Digital certificate storage, ownership, and exchange
• Masternode collateral requirement: 10500
• block reward : 25
  - Rewards are variable:
    height 0 to 288 = 75% to masternode
    height 289 to 1439 = 30% to masternode
    1440 and higher = 20% to maasternode

For more information, as well as an immediately useable, binary version of
the Skicoin client sofware, see https://www.abseits.ski


License
-------

Skicoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/skicoin/skicoin/tags) are created to indicate new official,
stable release versions of Skicoin Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](/doc/unit-tests.md) for new code, and to
submit new unit tests for old code.

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

Skicoin test suites can run by `cd src/test && ./test_skicoin`

The Travis CI system makes sure that every pull request is built for Windows
and Linux, OS X, and that unit and sanity tests are automatically run.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

Changes to translations as well as new translations can be submitted to
[Skicoin Core's Transifex page](https://www.transifex.com/projects/p/skicoin/).

Translations are periodically pulled from Transifex and merged into the git repository. See the
[translation process](doc/translation_process.md) for details on how this works.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.

*-because of 1/10th of all winter athletes in the world would have one coin [https://snowsports.org/report-on-global-ski-snowboard-participation-released/]

