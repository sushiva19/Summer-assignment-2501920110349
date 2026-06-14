//Write a program to Find product of digits.
#include <iostream>
using namespace std;
int main(){
    int i,pro=1,rem,temp,n;
    cout << "enter number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        pro=pro*rem;
        temp=temp/10;
    }
    cout << "product of the digits of number " << n << " is " << pro;
    return 0;
}