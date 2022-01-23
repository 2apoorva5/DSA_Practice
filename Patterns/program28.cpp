/*

             1
           1 2 1
         1 2 3 2 1
       1 2 3 4 3 2 1

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
        //1st triangle (spaces)
        int space = 1;
        while (space <= n - i)
        {
            cout << "  ";
            space = space + 1;
        }
        
        //2nd triangle
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j = j + 1;
        }
        
        //3rd triangle
        int start = i - 1;
        while (start >= 1)
        {
            cout << start << " ";
            start = start - 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}