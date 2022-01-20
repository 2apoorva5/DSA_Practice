// Looping : Print all even numbers between two numbers (take input from user)

#include<iostream>
using namespace std;

int main() {
    int M, N;

    cout << "Enter the values of M and N : ";
    cin >> M >> N;

    cout << "Even numbers between M and N : ";

    while (M <= N)
    {
        if(M % 2 == 0) {
            cout << M << " ";
        }

        M = M + 1;
    }
}