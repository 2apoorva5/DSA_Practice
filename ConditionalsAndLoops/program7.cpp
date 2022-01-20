// Looping : Print all even numbers between 1 to N

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 2;                           // taking I = 2 as even number starts from 2 only

    cout << "Enter the value of N : ";
    cin >> N;

    cout << "Even numbers between 1 to N : ";

    while (I <= N)
    {
       cout << I << " ";
       I = I + 2;
    }
}