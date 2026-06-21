//Write a program to Write function to find sum of two numbers.
#include <iostream>
using namespace std;
int sum(int a,int b){
    int sum=0;
    sum=a+b;
    cout << "sum of the numbers : " << sum;
    return 0;
}
int main(){
    int a,b;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    sum(a,b);
    return 0;
}    