/*

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1

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
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j = j + 1;
        }

        //2nd triangle
        int k = 1;
        while (k <= 2*(i - 1))
        {
            cout << "* ";
            k = k + 1;
        }
        
        //3rd triangle
        int l = n - i + 1;
        while (l >= 1)
        {
            cout << l << " ";
            l = l - 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}