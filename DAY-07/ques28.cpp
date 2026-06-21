//Write a program to Recursive reverse number.
#include <iostream>
using namespace std;
int rev(int n,int sum=0){
    if(n==0){
        return sum;
    }
    return rev(n/10,sum*10+(n%10));
    
}
int main(){
    int a;
    cout << "enter a number : ";
    cin >> a;
    cout << rev(a);
}