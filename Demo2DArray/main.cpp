/*
Demo2DArray
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*	This tutorial illustrates a way to create 2d array using pointers.
*	It covers the concept of pointer, array and concept of relation between them.
*/


#include <iostream>
using namespace std;
typedef unsigned int uint;
const int LENGTH = 4;

int main() {

    char* r[] = {"aa","bbb","cccc", "d"}; 
	


    // causes error: "++ needs L-value":
    // for (uint i=0; i<4; i++)
    //    cout << *r++ << endl; // try to use *(r+i) instead?
    // why? http://publib.boulder.ibm.com/infocenter/comphelp/v7v91/index.jsp?topic=%2Fcom.ibm.vacpp7a.doc%2Flanguage%2Fref%2Fclrc05lvalue.htm
    // ++ needs a MODIFIABLE L-value (see also something like http://stackoverflow.com/questions/3839553/array-as-const-pointer)

    char** p = r;
    for (uint i = 0; i < LENGTH; i++)
        cout << *p++ << endl;           // *p++ ==> *(p++) ==> *p;p++ ==> essentially does *(p+i) because i++ each time loop runs
										// output: aa
										//		   bbb
										//		   cccc
										//		   d
}


