//Write a program to Find GCD of two numbers.
#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    cout << "GCD of two numbers is " << a;
    return 0;
}