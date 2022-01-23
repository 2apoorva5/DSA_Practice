/*

    * * * *
      * * *
        * *
          * 

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
        //spaces print karalo
        int space = 1;
        while (space <= i - 1)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //stars print karalo
        int j = 1;
        while(j <= n - i + 1)
        {
            cout << "* ";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
    
}