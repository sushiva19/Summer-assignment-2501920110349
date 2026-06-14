//Write a program to Find factorial of a number. 
#include <iostream>
using namespace std;
int main(){
    int i,fact=1,n;
    cout << "enter number : ";
    cin >> n;
    for(i=n;i>1;i--){
        fact=fact*i;
    }
    cout << "factorial of number " << n << " is = " << fact;
    return 0;
}