// Find whether a character is uppercase, lowercase or numeric.

#include<iostream>
using namespace std;

int main() {
    char A;

    cout << "Enter a character : " ;
    A = cin.get();                                        // ---- takes any input and read as character.

    if(A >= 65 && A <= 90) {
        cout << "A is uppercase alphabet." << endl;
    } else if(A >= 97 && A <= 122) {
        cout << "A is lowercase alphabet." << endl;
    } else if(A >= 48 && A <= 57) {
        cout << "A is numeric." << endl;
    } else {
        cout << "A is some other character." << endl;
    }
}