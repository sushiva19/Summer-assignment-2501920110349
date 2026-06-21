//Write a program to Find x^n without pow().
#include <iostream>
using namespace std;
int main(){
    int i,x,n,mul=1;
    cout << "enter base x : ";
    cin >> x;
    cout << "enter power n : ";
    cin >> n;
    for(i=0;i<n;i++){
        mul=mul*x;
    }
    cout << x << " ^ " << n << " = " << mul;
    return 0;
}