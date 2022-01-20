// Find sum of all odd numbers between 1 TO N

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 1;                                  // As odd numbers will start from 1 only
    int SUM = 0;

    cout << "Enter the value of N : ";
    cin >> N;

    while (I <= N)
    {
        SUM = SUM + I;
        I = I + 2;
    }

    cout << "Sum of all odd numbers between 1 to N = " << SUM << endl;
}