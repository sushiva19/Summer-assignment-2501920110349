//Write a program to Write function to check prime.
#include <iostream>
using namespace std;
int prime(int a){
    int i,isprime=1;
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            isprime=0;
            a=a/i;
        }
        else{
            isprime=1;
        }
    }
    if(isprime==1){
        cout << "given number is a prime number.";
    }
    else{
        cout << "given number is not a prime number.";
    }
    return 0;
}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    prime(n);
    return 0;
}