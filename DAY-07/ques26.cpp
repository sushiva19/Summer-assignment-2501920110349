//Write a program to Recursive Fibonacci
#include <iostream>
using namespace std;
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a,i;
    cout << "enter number of term  : ";
    cin >> a;
    for(i=0;i<a;i++){
        cout << fib(i) << "\t";
    }
    return 0;
}