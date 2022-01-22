// Find the factorial of a number

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 1, PROD = 1;

    cout << "Enter the value of N : ";
    cin >> N;

    while (I <= N)
    {
        PROD = PROD * I;
        I = I + 1;
    }

    cout << "The factorial of N is : " << PROD << endl;
    
}