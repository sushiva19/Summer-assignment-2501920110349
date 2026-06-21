//Write a program to Write function to find maximum.
#include <iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        cout << "maximum : " << a;
    }
    else{
        cout << "maximum : " << b;
    }
    return 0;
}
int main(){
    int a,b;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;
    max(a,b);
    return 0;
}