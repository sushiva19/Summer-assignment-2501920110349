//Write a program to Check Armstrong number. 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,c=0,n,temp,rem,sum=0;
    cout << "enter number : ";
    cin >> n;
    temp=n;\
    //to check digits of the number 
    while(temp!=0){
        c=c+1;
        temp=temp/10;
    }
    //to check for armstrong
    i=n;
    while(i!=0){
        rem=i%10;
        sum=sum+round(pow(rem,c));
        i=i/10;
    } 
    if(sum==n){
        cout << "the given number is a armstrong number ";
    }
    else{
        cout << "the given number is not a armstrong number ";
    }
    return 0;
}