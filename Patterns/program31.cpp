/*

          *
        * * *
      * * * * *
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

    //upper triangle

    int i = 1;
    while (i <= n)
    {
      int space1 = 1;
      while (space1 <= n - i)
      {
        cout << "  ";
        space1 = space1 + 1;
      }
      
      int star1 = 1;
      while (star1 <= 2*i - 1)
      {
        cout << "* ";
        star1 = star1 + 1;
      }
      
      cout << endl;
      i = i + 1;
    }
    

    //lower triangle

    int j = 1;
    while (j <= n - 1)
    {
      int space2 = 1;
      while (space2 <= j)
      {
        cout << "  ";
        space2 = space2 + 1;
      }

      int star2 = space2;
      while (star2 < 2*n - j)
      {
        cout << "* ";
        star2 = star2 + 1;
      }
      
      cout << endl;
      j = j + 1;
    }
    
}