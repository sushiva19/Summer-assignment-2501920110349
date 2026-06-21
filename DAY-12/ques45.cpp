 //Write a program to Write function for palindrome.
#include <iostream>
using namespace std;
int palindrome(int a){
    int rem,sum=0,temp,i,j;
    temp=a;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==a){
        cout << "the given number is a palindrome ";
    }
    else{
        cout << "the given number is not a palindrome";
    }
    return 0;
}
int main(){
    int n;
    cout << "ener a number : ";
    cin >> n;
    palindrome(n);
    return 0;
}