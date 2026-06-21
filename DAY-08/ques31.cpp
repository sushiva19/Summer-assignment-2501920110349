/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter number of lines : ";
    cin >> n;
    for(i=0;i<=n;i++){
        char ch=65;
        for(j=0;j<i;j++){
            cout << ch << "\t";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}