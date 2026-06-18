//Write a program to Find LCM of two numbers.
#include <iostream>
using namespace std;
int main(){
    int num1,num2,a,b,temp=0,lcm=1,gcd;
    cout << "enter num1 : ";
    cin >> num1;
    cout << "enter num2 : ";
    cin >> num2;
    a=num1;
    b=num2;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    //to find lcm
    lcm=(num1*num2)/gcd;
    cout << "lcm of the numbers : " << lcm;
    return 0;
}