/*

          *
        * * *
      * * * * *
    * * * * * * *

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
        //spaces
        int space = 1;
        while (space <= n - i)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //2nd triangle (stars)
        int j = 1;
        while (j <= 2*i - 1)
        {
            cout << "* ";
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}