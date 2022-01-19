// Find a number is positive, negative or zero

#include<iostream>
using namespace std;

int main() {
    int A;

    cout << "Enter the value of A : ";
    cin >> A;

    if(A > 0) {
        cout << "A is positive!" << endl;
    } else if(A < 0) {
        cout << "A is negative!" << endl;
    } else {
        cout << "A is 0!" << endl;
    }
}