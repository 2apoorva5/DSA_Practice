// Find whether a given number is prime or not

#include<iostream>
using namespace std;

int main() {
    int N;
    int I = 2;

    cout << "Enter the value of N : ";
    cin >> N;

    while (I < N) {
        if(N % I == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }

        I = I + 1;
    }
    
    cout << "Prime" << endl;
    return 0;
}