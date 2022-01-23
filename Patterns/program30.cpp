/*

    * * * * * * *
      * * * * * 
        * * *
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
        //1st triangle 
        int space = 1;
        while (space <= i - 1)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //2nd triangle
        int stars1 = i;
        while (stars1 <= 2*n - i)
        {
            cout << "* ";
            stars1 = stars1 + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}