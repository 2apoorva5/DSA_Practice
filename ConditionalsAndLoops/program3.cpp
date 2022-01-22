// Find greatest between three numbers

#include<iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Enter the value of A : ";
    cin >> A;

    cout << "Enter the value of B : ";
    cin >> B;

    cout << "Enter the value of C : ";
    cin >> C;

    if(A > B && A > C) {
        cout << "A is greatest!" << endl;
    } else if(B > A && B > C) {
        cout << "B is greatest!" << endl;
    } else if(C > A && C > B) {
        cout << "C is greatest!" << endl;
    } else {
        cout << "Can't determine!" << endl;
    }
}