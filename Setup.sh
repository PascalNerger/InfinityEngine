#!/bin/sh

sudo apt-get update
sudo apt-get -y install gcc-8 g++-8

gcc --version
g++ --version

echo "Done."