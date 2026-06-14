//Write a program to Reverse a number.
#include <iostream>
using namespace std;
int main(){
    int i,sum=0,rem,temp,n;
    cout << "enter number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    cout << "reverse of the number " << n << " is " << sum;
    return 0;
}