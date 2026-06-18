//Write a program to Print prime numbers in a range.
#include <iostream>
using namespace std;
int main(){
    int i,n,isprime=0,max,min;
    cout << "define range\n";
    cout << "min value : ";
    cin >> min;
    cout << "max value : ";
    cin >> max;
    cout << "prime numbers between " << min << " and " << max << " are : ";
    for(n=min;n<=max;n++){
        for(i=2;i<n;i++){
            if(n%i==0){
            isprime=0;
            break;
            }
            else{
                isprime=1;
            }
        }
        if(isprime==1){
            cout << n << "\t";
        }
    }
    return 0;
}