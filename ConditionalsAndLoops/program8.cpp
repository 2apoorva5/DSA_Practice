// Looping : Print all odd numbers between 1 to N

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 1;                           // taking I = 1 as odd number starts from 1 only

    cout << "Enter the value of N : ";
    cin >> N;

    cout << "Odd numbers between 1 to N : ";

    while (I <= N)
    {
       cout << I << " ";
       I = I + 2;
    }
}