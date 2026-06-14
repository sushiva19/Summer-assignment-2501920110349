//Write a program to Check whether a number is palindrome.
#include <iostream>
using namespace std;
int main (){
    int i,rem,sum=0,temp,n;
    cout << "enter a number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if (sum==n) {
        cout << "the given  number is a palindrome.";
    }else {
        cout << "the given number is not a palindrome.";
    }
    return 0;
}