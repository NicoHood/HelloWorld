Hello World example
===================
This is a general Hello World example to get a standard program on a linux machine like Raspberry Pi.
It provides a simple makefile, a standard lib and setup() and loop() functions.

Installation
============

In order to install the program so it runs at startup you need to create an entry to rc.local.

```bash
#copy program
$ sudo cp ./Program /home/pi/Desktop/Programs/Program

# set rights to execute the file
$ sudo chmod 0777 /home/pi/Desktop/Programs/Program

# test program first
# abort with crtl + c
/home/pi/Desktop/Programs/Program

# open autostart file
$ sudo nano /etc/rc.local
# add the script (above exit 0)
/home/pi/Desktop/Programs/Program </dev/null >/dev/null 2>&1 &

# press ctrl + x and save with y
# reboot your system

# kill the Program
sudo killall Program
```

How to compile
==============

Makefile instructions

```bash
# compile the program
$ sudo make
# start the program (2options)
$ sudo make start
$ sudo ./Program
# compile and start
$ sudo make cstart
# clean the .o sources
$ sudo make clean
# clean all files
$ sudo make cleanall
# rebuild (clean + compile)
$ sudo make rebuild
# manually compile with (remove the lib.h include then)
$ sudo gcc -o main.o main.cpp -pedantic -Wall
```

Version History
===============

```
1.0 Release (05.06.2014)
```

Licence and Copyright
=====================

```
Copyright (c) 2014 NicoHood
See the readme for credit to other people.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
```
