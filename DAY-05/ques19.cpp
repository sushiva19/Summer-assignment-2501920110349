//Write a program to Print factors of a number.
#include <iostream>
using namespace std;
int main(){
    int i,n,factors;
    cout << "enter number : ";
    cin >> n;
    cout << "factors of the number " << n << " is : ";
    //for calculating factors
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout << i << "\t";
        }
    }
    return 0;
}