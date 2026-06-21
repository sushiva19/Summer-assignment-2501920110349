//Write a program to Convert binary to decimal.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,dec,rem,bin,temp,p,sum=0,dig=0;
    cout << "enter binary number : ";
    cin >> bin;
    //to calculate number of digits
    temp=bin;
    while(temp!=0){
        dig++;
        temp=temp/10;
    } 
    //to calculate binary to decimal 
    for(i=0;i<dig;i++){
        rem=bin%10;
        sum=sum+rem*pow(2,i);
        bin=bin/10;
    }
    cout << "binary number : " << sum;
}