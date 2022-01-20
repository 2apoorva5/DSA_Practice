// Check a number is positive or not

#include<iostream>
using namespace std;

int main() {
    int A;
    cin >> A;                                   // cin >>   ----  used to take input from user.

    if(A > 0) {
        cout << "A is positive!" <<  endl;
    } else {
        cout << "A is not positive!" << endl;
    }
}