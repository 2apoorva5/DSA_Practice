// Looping : Find the sum of numbers from 1 to N

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 1;
    int SUM = 0;

    cout << "Enter the value of N : ";
    cin >> N;

    while (I <= N) {
        SUM = SUM + I;
        I = I + 1;
    }

    cout << "SUM of numbers between 1 to N = " << SUM << endl;
}