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
        int num1 = 1;
        while (num1 <= n - i + 1)
        {
            cout << num1 << " ";
            num1 = num1 + 1;
        }

        //2nd triangle
        int stars = 1;
        while (stars <= 2*i - 2)
        {
            cout << "* ";
            stars = stars + 1;
        }
        
        //3rd triangle
        int num2 = n - i + 1;
        while (num2 >= 1)
        {
            cout << num2 << " ";
            num2 = num2 - 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    
}