// FIRST PROGRAM - HELLO WORLD!

#include<iostream>
/*
#include<filename> is a preprocessor directive which runs before the program is compiled
and hence includes the file to be used later in the source code.

A file called 'iostream' has 'cout' defined in it.

Hint : i/o means input/output
*/

using namespace std;
/*
using      :  You are going to use it.
namespace  :  To use what? A namespace.
std        :  The std namespace (where features of the C++ Standard Library, such as 
              string or vector, are declared).
*/

int main() {
    cout << "Hello world!" << endl;
    cout << "Namaste Duniya!" << '\n';
}


/*

{}        ----   Determines scope of the function.
cout <<   ----   To print output on screen console.
<< endl   ----   New line (takes the cursor to next line by ending the current line) - Generally used.
\n        ----   New line (takes the cursor to next line by ending the current line).
;         ----   To end line in a program.

*/