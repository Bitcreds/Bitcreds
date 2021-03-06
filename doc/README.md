[![Deploy](https://www.herokucdn.com/deploy/button.svg)](https://heroku.com/deploy)

[![Build Status](https://travis-ci.org/Bitcreds/BCRS.png?branch=master)](https://travis-ci.org/Bitcreds/BCRS)
[![Stories in Ready](https://badge.waffle.io/Bitcreds-BCRS/Bitcreds.png?label=ready&title=Ready)](https://waffle.io/Bitcreds-BCRS/Bitcreds)

Graph on Pull Request History
====================================

[![Throughput Graph](https://graphs.waffle.io/Bitcreds-BCRS/Bitcreds/throughput.svg)](https://waffle.io/Bitcreds-BCRS/Bitcreds/metrics/throughput)  

# **Bitcreds (BCRS) v1.0.0.0**

![BCRS logo](https://github.com/Bitcreds/BCRS/blob/master/src/qt/res/icons/light/about.png)

**Copyright (c) 2017 Bitcreds Developers**

What is Bitcreds?
----------------
* Coin Suffix: BCRS
* PoW Mining Algorithm: Argon2d
* PoW Difficulty Algorithm: DELTA
* PoW Period: ~36 years
* PoW Target Spacing: 128 Seconds
* PoW Reward per Block: 1 BCRS
* Maturity: 10 Blocks
* PoW Blocks: ~675 per day
* Masternode Collateral Amount: 500 BCRS
* Masternode Min Confirmation: 10 Blocks
* Masternode Reward: See Below
* Total Coins: 95,000,000 (~36 Years)
* Min TX Fee: 0.0001 BCRS

Bitcreds uses peer-to-peer technology to operate securly with no central authority (decentralisation): managing transactions and issuing currency (BCRS) are carried out collectively by the Bitcreds network. Bitcreds is the name of open source software which enables the use of the currency BCRS.

Bitcreds utilises Masternodes, Privatesend and InstantSend to provide anonymous and near instant transaction confirmations.

Bitcreds implements Gavin Andresens signature cache optimisation from Bitcoin for significantly faster transaction validation.


**Masternode/Privatesend Network Information**
Utilisation of InstantSend for near-instant transactions and PrivateSend for anonymous transactions.

**MainNet Parameters**
P2P Port = 31000
RPC Port = 31050
Masternodes = 31000
Magic Bytes: 0x2f 0x32 0x45 0x51

**TestNet Parameters**
P2P Port = 31400
RPC Port = 31450
Masternodes = 31400
Magic Bytes: 0x1f 0x22 0x05 0x30

**RegTest Parameters**
P2P Port = 31500
RPC Port = 31550
Masternodes = 31500
Magic Bytes = 0x1f 0x22 0x05 0x2f

**Rewards Structure**

 Years|      Blocks        |   PoW  | Masternodes |
------|--------------------|--------|-------------|
 0-1  |       0 -  246544  | 10BCRS |    1BCRS    |
 1-2  |  246545 -  493088  | 10BCRS |    1BCRS    |
 2-3  |  493089 -  739631  |  9BCRS |    2BCRS    |
 3-4  |  739632 -  986175  |  9BCRS |    2BCRS    |
 4-5  |  986176 - 1232719  |  8BCRS |    3BCRS    |
 5-6  | 1232720 - 1479263  |  8BCRS |    3BCRS    |
 6-7  | 1479264 - 1725806  |  7BCRS |    4BCRS    |
 7-8  | 1725807 - 1972350  |  7BCRS |    4BCRS    |
 8-9  | 1972351 - 2218894  |  6BCRS |    5BCRS    |
 9-10 | 2218895 - 2465438  |  6BCRS |    5BCRS    |
10-11 | 2465439 - 2711981  |  5BCRS |    6BCRS    |
11-12 | 2711982 - 2958525  |  5BCRS |    6BCRS    |
12-13 | 2958526 - 3205069  |  4BCRS |    7BCRS    |
13-14 | 3205070 - 3451613  |  3BCRS |    7BCRS    |
14-15 | 3451614 - 3698156  |  3BCRS |    8BCRS    |
15-16 | 3698156 - 3944700  |  2BCRS |    8BCRS    |
16-17 | 3944701 - 4191244  |  2BCRS |    9BCRS    |
17-18 | 4191245 - 4437788  |  1BCRS |    9BCRS    |
18-19 | 4437789 - 4684331  |  1BCRS |   10BCRS    |
19-20 | 4684332 - 4930875  |  1BCRS |   10BCRS    |
20-21 | 4930876 - 5177419  |  1BCRS |   10BCRS    |
21-22 | 5177420 - 5423963  |  1BCRS |   10BCRS    |
22-23 | 5423964 - 5670506  |  1BCRS |   10BCRS    |
23-24 | 5670507 - 5917050  |  1BCRS |   10BCRS    |
24-25 | 5917051 - 6163594  |  1BCRS |   10BCRS    |
25-26 | 6163595 - 6410138  |  1BCRS |   10BCRS    |
26-27 | 6410139 - 6656681  |  1BCRS |   10BCRS    |
27-28 | 6656682 - 6903225  |  1BCRS |   10BCRS    |
28-30 | 6903226 - 7149769  |  1BCRS |   10BCRS    |   
30-31 | 7149770 - 7396313  |  1BCRS |   10BCRS    |
31-32 | 7396314 - 7642856  |  1BCRS |   10BCRS    |
32-33 | 7642857 - 7889400  |  1BCRS |   10BCRS    |
33-34 | 7889401 - 8135944  |  1BCRS |   10BCRS    |
34-35 | 8135945 - 8382488  |  1BCRS |   10BCRS    |
35-36 | 8382489 - 8629031  |  1BCRS |   10BCRS    |

UNIX BUILD NOTES
====================
Some notes on how to build Bitcreds in Unix. 

Note
---------------------
Always use absolute paths to configure and compile Bitcreds and the dependencies,
for example, when specifying the the path of the dependency:

    ../dist/configure --enable-cxx --disable-shared --with-pic --prefix=$BDB_PREFIX

Here BDB_PREFIX must absolute path - it is defined using $(pwd) which ensures
the usage of the absolute path.

To Build
---------------------

```bash
./autogen.sh
./configure
make
make install # optional
```

This will build bitcreds-qt as well if the dependencies are met.

Dependencies
---------------------

These dependencies are required:

 Library     | Purpose          | Description
 ------------|------------------|----------------------
 libssl      | SSL Support      | Secure communications
 libboost    | Boost            | C++ Library
 libevent    | Networking       | OS independent asynchronous networking
 
Optional dependencies:

 Library     | Purpose          | Description
 ------------|------------------|----------------------
 miniupnpc   | UPnP Support     | Firewall-jumping support
 libdb4.8    | Berkeley DB      | Wallet storage (only needed when wallet enabled)
 qt          | GUI              | GUI toolkit (only needed when GUI enabled)
 protobuf    | Payments in GUI  | Data interchange format used for payment protocol (only needed when GUI enabled)
 libqrencode | QR codes in GUI  | Optional for generating QR codes (only needed when GUI enabled)
 libzmq3     | ZMQ notification | Optional, allows generating ZMQ notifications (requires ZMQ version >= 4.x)
 
For the versions used in the release, see [release-process.md](release-process.md) under *Fetch and build inputs*.

System requirements
--------------------

C++ compilers are memory-hungry. It is recommended to have at least 3 GB of
memory available when compiling Bitcreds.

Dependency Build Instructions: Ubuntu & Debian
----------------------------------------------
Build requirements:

    sudo apt-get install build-essential libtool automake autotools-dev autoconf pkg-config libssl-dev libcrypto++-dev libevent-dev git
    
for Ubuntu 12.04 and later or Debian 7 and later libboost-all-dev has to be installed:

    sudo apt-get install libboost-all-dev

 db4.8 packages are available [here](https://launchpad.net/~bitcoin/+archive/bitcoin).
 You can add the repository using the following command:

        sudo add-apt-repository ppa:bitcoin/bitcoin
        sudo apt-get update

 Ubuntu 12.04 and later have packages for libdb5.1-dev and libdb5.1++-dev,
 but using these will break binary wallet compatibility, and is not recommended.

for Debian 7 (Wheezy) and later:
 The oldstable repository contains db4.8 packages.
 Add the following line to /etc/apt/sources.list,
 replacing [mirror] with any official debian mirror.

    deb http://[mirror]/debian/ oldstable main

To enable the change run

    sudo apt-get update

for other Debian & Ubuntu (with ppa):

    sudo apt-get install libdb4.8-dev libdb4.8++-dev

Optional (see --with-miniupnpc and --enable-upnp-default):

    sudo apt-get install libminiupnpc-dev

ZMQ dependencies (provides ZMQ API 4.x):

        sudo apt-get install libzmq3-dev
    
Dependencies for the GUI: Ubuntu & Debian
-----------------------------------------

If you want to build Bitcreds-Qt, make sure that the required packages for Qt development
are installed. Qt 5 is necessary to build the GUI.
If both Qt 4 and Qt 5 are installed, Qt 5 will be used. Pass `--with-gui=qt5` to configure to choose Qt5.
To build without GUI pass `--without-gui`.

For Qt 5 you need the following:

    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libcrypto++-dev

libqrencode (optional) can be installed with:

    sudo apt-get install libqrencode-dev
    
Once these are installed, they will be found by configure and a bitcreds-qt executable will be
built by default.

Notes
-----
The release is built with GCC and then "strip bitcredsd" to strip the debug
symbols, which reduces the executable size by about 90%.

miniupnpc
---------

[miniupnpc](http://miniupnp.free.fr/) may be used for UPnP port mapping.  It can be downloaded from [here](
http://miniupnp.tuxfamily.org/files/).  UPnP support is compiled in and
turned off by default.  See the configure options for upnp behavior desired:

    --without-miniupnpc      No UPnP support miniupnp not required
    --disable-upnp-default   (the default) UPnP support turned off by default at runtime
    --enable-upnp-default    UPnP support turned on by default at runtime

To build:

    tar -xzvf miniupnpc-1.6.tar.gz
    cd miniupnpc-1.6
    make
    sudo su
    make install

Berkeley DB
-----------
It is recommended to use Berkeley DB 4.8. If you have to build it yourself:

```bash
BITCREDS_ROOT=$(pwd)

# Pick some path to install BDB to, here we create a directory within the bitcreds directory
BDB_PREFIX="${BITCREDS_ROOT}/db4"
mkdir -p $BDB_PREFIX

# Fetch the source and verify that it is not tampered with
wget 'http://download.oracle.com/berkeley-db/db-4.8.30.NC.tar.gz'
echo '12edc0df75bf9abd7f82f821795bcee50f42cb2e5f76a6a281b85732798364ef  db-4.8.30.NC.tar.gz' | sha256sum -c
# -> db-4.8.30.NC.tar.gz: OK
tar -xzvf db-4.8.30.NC.tar.gz

# Build the library and install to our prefix
cd db-4.8.30.NC/build_unix/
#  Note: Do a static build so that it can be embedded into the exectuable, instead of having to find a .so at runtime
../dist/configure --prefix=/usr/local --enable-cxx
make 
sudo make install

# Configure Bitcreds to use our own-built instance of BDB
cd $BITCREDS_ROOT
./configure (other args...) LDFLAGS="-L${BDB_PREFIX}/lib/" CPPFLAGS="-I${BDB_PREFIX}/include/"
```

**Note**: You only need Berkeley DB if the wallet is enabled (see the section *Disable-Wallet mode* below).

Boost
-----
If you need to build Boost yourself:

    sudo su
    ./bootstrap.sh
    ./bjam install


Security
--------
To help make your Bitcreds installation more secure by making certain attacks impossible to
exploit even if a vulnerability is found, binaries are hardened by default.
This can be disabled with:

Hardening Flags:

    ./configure --enable-hardening
    ./configure --disable-hardening


Hardening enables the following features:

* Position Independent Executable
    Build position independent code to take advantage of Address Space Layout Randomization
    offered by some kernels. An attacker who is able to cause execution of code at an arbitrary
    memory location is thwarted if he doesn't know where anything useful is located.
    The stack and heap are randomly located by default but this allows the code section to be
    randomly located as well.

    On an Amd64 processor where a library was not compiled with -fPIC, this will cause an error
    such as: "relocation R_X86_64_32 against `......' can not be used when making a shared object;"

    To test that you have built PIE executable, install scanelf, part of paxutils, and use:

        scanelf -e ./bitcredsd

    The output should contain:
     TYPE
    ET_DYN

* Non-executable Stack
    If the stack is executable then trivial stack based buffer overflow exploits are possible if
    vulnerable buffers are found. By default, bitcreds should be built with a non-executable stack
    but if one of the libraries it uses asks for an executable stack or someone makes a mistake
    and uses a compiler extension which requires an executable stack, it will silently build an
    executable without the non-executable stack protection.

    To verify that the stack is non-executable after compiling use:
    `scanelf -e ./bitcredsd`

    the output should contain:
    STK/REL/PTL
    RW- R-- RW-

    The STK RW- means that the stack is readable and writeable but not executable.

Disable-wallet mode
--------------------
When the intention is to run only a P2P node without a wallet, bitcreds may be compiled in
disable-wallet mode with:

    ./configure --disable-wallet

In this case there is no dependency on Berkeley DB 4.8.

Mining is also possible in disable-wallet mode, but only using the `getblocktemplate` RPC call.

AVX2 Mining Optimisations
-------------------------
For increased performance when mining, AVX2 optimisations can be enabled. 

Prior to running the build commands:

    CPPFLAGS=-march=native
    
CPU's with AVX2 support:

    Intel
        Haswell processor, Q2 2013
        Haswell E processor, Q3 2014
        Broadwell processor, Q4 2014
        Broadwell E processor, Q3 2016
        Skylake processor, Q3 2015
        Kaby Lake processor, Q3 2016(ULV mobile)/Q1 2017(desktop/mobile)
        Coffee Lake processor, expected in 2017
        Cannonlake processor, expected in 2017
    AMD
        Carrizo processor, Q2 2015
        Ryzen processor, Q1 2017

Example Build Command
--------------------
Qt Wallet and Deamon, CLI version build:

    ./autogen.sh && ./configure --with-gui && make

CLI and Deamon Only Buld:

    ./autogen.sh && ./configure --without-gui && make
