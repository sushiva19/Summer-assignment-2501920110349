//Write a program to Print Armstrong numbers in a range.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,min=0,max=0;
    cout << "........DEFINE RANGE........" << "\n";
    cout << "enter min : ";
    cin >> min;
    cout << "enter max : ";
    cin >> max;
    cout << "armstrong numbers in range are : ";
    for(i=min;i<=max;i++){
        int c=0,temp=0,n=0,rem=0,sum=0;
        temp=i;
        while(temp!=0){
        c=c+1;
        temp=temp/10;
        }
        //to check for armstrong
        n=i;
        while(n!=0){
            rem=n%10;
            sum=sum+round(pow(rem,c));
            n=n/10;
        } 
        if(sum==i){
            cout << i << "\t";
        }
    }
}
