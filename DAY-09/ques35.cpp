/*  Write a program to Print repeated character
    pattern.
    A
    BB
    CCC
    DDDD
    EEEEE

*/

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch=65;
    cout << "enter no of rows : ";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout << ch;
        }
        ch++;
        cout << "\n";
    }
    return 0;
}