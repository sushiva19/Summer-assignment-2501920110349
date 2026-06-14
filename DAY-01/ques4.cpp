//Write a program to Count digits in a number.
#include <iostream>
using namespace std;
int main(){
    int temp=0,count=0,n;
    cout << "enter any number : ";
    cin >> n;
    temp=n;
    while(temp!=0){
        temp=temp/10;
        count=count+1;
    }
    cout << "number of digits in " << n << " is = " << count;
    return 0;
}