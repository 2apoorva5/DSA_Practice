/*

           *
         * *
       * * * 
     * * * * 

*/

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int i = 1;
    
    while(i <= n)
    {
        //pehle space print karlo
        int space = 1;
        while (space <= n - i)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //phir stars print karlo
        int j = 1;
        while(j <= i)
        {
            cout << "* ";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}