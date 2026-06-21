/*Write a program to Print number triangle.
1              
12
123
1234
12345*/

#include <iostream>
using namespace std;
int main(){
    int n,i,j,num=0;
    cout << "enter number of lines : ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << j << "\t";
        }
        cout << "\n";
    }
    return 0;
}