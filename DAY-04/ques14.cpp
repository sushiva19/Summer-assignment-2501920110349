//Write a program to Find nth Fibonacci term. 
#include <iostream>
using namespace std;
int main(){
    int i,c,a=0,n,b=1,temp=0;
    cout << "enter nth term : ";
    cin >> n; 
    for(i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;                
    }
    cout << "the nth fibonnaci term is : " << c;
    return 0;
}