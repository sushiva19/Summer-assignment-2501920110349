/* Write a program to Print reverse pyramid.
   *********
    *******
     *****
      ***
       *
*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "enter no of rows : ";
    cin >> n;
    for(i=n;i>=1;i--){
        //spaces
        for(j=0;j<=(n-i);j++){
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