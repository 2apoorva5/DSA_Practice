/*

          1
        2 2
      3 3 3
    4 4 4 4

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
        while (space <= n - i)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //numbers print karalo
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}