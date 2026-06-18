//Write a program to Check perfect number.
#include <iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout << "enter number : ";
    cin >> n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        cout << "the given number is a perfect number";
    }
    else{
        cout << "the given number is not a perfect number";
    }
    return 0;
}