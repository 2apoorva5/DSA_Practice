/*

    A
    B C
    C D E
    D E F G

*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;

        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}