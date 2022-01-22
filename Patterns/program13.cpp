/*

    A B C
    D E F
    G H I

*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;
    int count = 0;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A';
        while (j <= n)
        {
            cout << char(ch + count) << " ";
            count = count + 1;
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}