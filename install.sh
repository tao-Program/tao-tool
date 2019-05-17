#!/bin/bash

mv tao-tool/ ~/
# install jp2a.
sudo apt-get install jp2a
#Compile
gcc ~/tao-tool/main.c -o tao
mv ~/tao-tool/tao /bin
