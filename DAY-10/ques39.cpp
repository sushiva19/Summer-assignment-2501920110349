/* Write a program to Print number pyramid.
      1
     121
    12321
   1234321
  123454321
*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "enter no of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // 2. Print ascending numbers from 1 to i
        for (j = 1; j <= i; j++) {
            cout << j;
        }

        // 3. Print descending numbers from (i - 1) down to 1
        for (j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}