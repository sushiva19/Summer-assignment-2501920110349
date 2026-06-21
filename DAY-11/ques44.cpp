//Write a program to Write function to find factorial.
#include <iostream>
using namespace std;
int fact(int a){
    int i,fact=1;
    for(i=a;i>=1;i--){
        fact=fact*i;
    }
    cout << "factorial : " << fact;
    return 0;
}
int main(){
    int n;
    cout << "entar a number : ";
    cin >> n;
    fact(n);
    return 0;
}