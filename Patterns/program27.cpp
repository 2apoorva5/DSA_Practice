/*

    1 2 3 4 
      2 3 4
        3 4
          4

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
        
        //numbers print karalo
        int j = n - i + 1, count = i;
        while (j >= 1)
        {
            cout << count << " ";
            count = count + 1;
            j = j - 1;
        }
        
        cout << endl;
        i = i + 1;
    }

}