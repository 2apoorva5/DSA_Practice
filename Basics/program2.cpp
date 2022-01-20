// SECOND PROGRAM - UNDERSTANDING DATATYPES

#include<iostream>
using namespace std;

int main() {
    int A = 123;                 // 4 bytes in memory
    cout << A << endl;

    char B = 'A';                // 1 byte in memory
    // char B = 'AB';            -- This is wrong (should be only 1 character in ' ')
    cout << B << endl;

    bool BL = true;              // 1 byte in memory
    cout << BL << endl;

    float F = 1.2;               // 4 bytes in memory
    cout << F << endl;

    double D = 1.23;             // 8 bytes in memory
    cout << D << endl;


    // WARNING : Don't use same variable name multiple times.


    // sizeof() function gives the size or memory in bytes a variable is holding

    int sizeA = sizeof(A);
    int sizeB = sizeof(B);
    int sizeBL = sizeof(BL);
    int sizeF = sizeof(F);
    int sizeD = sizeof(D);

    cout << "Size of A is : " << sizeA << endl;             // 4
    cout << "Size of B is : " << sizeB << endl;             // 1
    cout << "Size of BL is : " << sizeBL << endl;           // 1 
    cout << "Size of F is : " << sizeF << endl;             // 4
    cout << "Size of D is : " << sizeD << endl;             // 8

    /* Different datatypes use different amount of memory. Amount of memory used also depends 
       on the architecture of the CPU. */


    // Converison of one datatype to another (if it is valid) is called typecasting.

    int a = 'a';
    char ch = 98;

    cout << "a : " << a << endl;
    cout << "ch : " << ch << endl;

    // This automatic typecasting is called Implicit Typecasting.
}