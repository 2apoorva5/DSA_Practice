// Looping : Print numbers 1 to N

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 1;

    cout << "Enter the value of N : ";
    cin >> N;

    while (I <= N)                                // ---- One way of looping - while loop.
    {
        cout << I << " ";
        I = I + 1;
    }
}