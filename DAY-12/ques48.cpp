//Write a program to Write function for perfect number.
#include <iostream>
using namespace std;
int perfect(int n){
    int i,j,sum=1,temp=0;
    temp=n;
    for(i=2;i*i<=n;i++){
        if(temp%1==0){
            sum=sum+i;
        }
        if (i * i != temp) {
                sum = sum + (temp / i); // Add the larger paired factor
            }
    }
    if(sum==n){
        cout << "the given nuumber is a perfect number ";
    }
    else{
        cout << "the given number is not a perfect number ";
    }
    return 0;
}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    perfect(n);
    return 0;
}