//Write a program to Generate Fibonacci series.
#include <iostream>
using namespace std;
int main(){
    int i,c,a=0,n,b=1,temp=0;
    cout << "enter no of terms : ";
    cin >> n;
    cout << a << "\t" << b << "\t"; 
    for(i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;          
        cout << c << "\t";     
    }
    return 0;
}