// Find greater between two numbers

#include<iostream>
using namespace std;

int main() {
    int A, B;

    cin >> A >> B;                                   // cin doesn't read 'space', 'enter' or 'tab'.

    if(A > B) {
        cout << "A is greater!" << endl;
    } else if(B > A) {
        cout << "B is greater!" << endl;
    } else {
        cout << "A and B are equal!" << endl;
    }
}