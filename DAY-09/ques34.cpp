/*  Write a program to Print reverse number
    triangle.
    12345
    1234
    123
    12
    1
*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "enter number of rows : ";
    cin >> n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout << j << "\t";
        }
        cout << "\n";
    }
    return 0;
}