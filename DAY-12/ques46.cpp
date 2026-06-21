//Write a program to Write function for Armstrong.
#include <iostream>
#include <cmath>
using namespace std;
int armstrong(int a){
    int i,j,c=0,sum=0,rem,temp;
    temp=a;
    //to count number of digits
    while(temp!=0){
        c++;
        temp=temp/10;
    }
    //to check armstrong
    temp=a;
    while(temp!=0){
        rem=temp%10;
        sum=sum+round(pow(rem,c));
        temp=temp/10;
    }
    if(sum==a){
        cout << "the given number is a armstrong number";
    }
    else{
        cout << "the given number is not a armstrong number";
    }
    return 0;
}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    armstrong(n);
    return 0;
}