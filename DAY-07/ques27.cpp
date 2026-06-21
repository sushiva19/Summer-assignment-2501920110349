//Write a program to Recursive sum of digits.
#include <iostream>
using namespace std;
int sod(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sod(n/10);
}
int main(){
    int a;
    cout << "enter a number : ";
    cin >> a;
    cout << sod(a);
    return 0;
}