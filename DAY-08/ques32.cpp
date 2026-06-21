/*Write a program to Print repeated-number
pattern.
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "enter number of lines : ";
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << i << "\t";
        }
        cout << "\n";
    }
    return 0;
}