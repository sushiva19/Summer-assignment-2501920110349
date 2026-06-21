/* Write a program to Print star pyramid.
        *
       ***
      *****
     *******
    *********
*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "enter no of rows : ";
    cin >> n;
    for(i=0;i<=n;i++){
        //spaces
        for(j=n;j>=i;j--){
            cout << "  ";
        }
        //stars
        for(j=1;j<=(2*i-1);j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}