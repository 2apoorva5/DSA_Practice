// THIRD PROGRAM - UNDERSTANDING ARITHMETIC OPERATORS

#include<iostream>
using namespace std;

int main() {
    int sum = 4 + 5;                 // + operator
    cout << sum << endl;


    int diff = 9 - 5;                // - operator
    cout << diff << endl; 


    int prod = 4 * 6;                // * operator
    cout << prod << endl;


    int div1 = 6 / 4;                // / operator
    int div2 = 4 / 6;
    cout << div1 << endl;
    cout << div2 << endl;

    float div3 = 6.0 / 4;
    float div4 = 4.0 / 6;
    cout << div3 << endl;
    cout << div4 << endl; 

    /*
    int / int = int (floor value of result)
    int / float = float
    float / int = float
    int / double = double
    double / int = double
    */


    int mod = 8 % 5;                 // % operator -- gives remainder
    cout << mod << endl;
}