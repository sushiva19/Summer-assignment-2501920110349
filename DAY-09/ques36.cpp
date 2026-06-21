/*  Write a program to Print hollow square
    pattern.
    *****
    *   *
    *   *
    *   *
    *****
*/

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "enter no of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print star only on the borders
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}