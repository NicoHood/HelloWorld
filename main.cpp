/*
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
*/

// include system librarys
#include <stdio.h> // printf
#include <stdlib.h> // exit(int);
#include <string.h> // errno
#include <errno.h> // error output
#include <stdint.h> // uint_t definitions
#include <stdbool.h> // bool type

// include library
#include "lib.h"

// function prototypes
void setup(void);
void loop(void);

int main(){ 
	setup();
	while(1)
		loop();
	return 0;
}

void setup(void){
	// put your setup code here, to run once:
	printf("%s \n", "Hello World");
}

void loop(void){
	// put your main code here, to run repeatedly:
	// remove exit 0
	exit (0);
}