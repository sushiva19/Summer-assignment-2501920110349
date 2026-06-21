//Write a program to Write function for Fibonacci.
#include <iostream>
using namespace std;
int fib(int n){
    int i,c,j,temp,a=0,b=1;
    cout << a << " " << b << " ";;
    for(i=1;i<=(n-2);i++){
        c=a+b;
        cout << c << " ";
        temp=a;
        a=b;
        b=c;
    }
    return 0;
}
int main(){
    int n;
    cout << "enter given number : ";
    cin >> n;
    fib(n);
    return 0;
}