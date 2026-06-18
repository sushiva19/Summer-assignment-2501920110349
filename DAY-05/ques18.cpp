//Write a program to Check strong number.
#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0,lastdigit,temp=0;
    cout << "enter number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        int fact=1;
        lastdigit=temp%10;
        for(i=lastdigit;i>=1;i--){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        cout << "the given number is a strong number";
    }
    else{
        cout << "the given number is not a strong number";
    }
    return 0;
}
