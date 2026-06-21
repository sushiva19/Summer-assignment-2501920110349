//Write a program to Convert decimal to binary
#include <iostream>
using namespace std;
int main(){
    int dec,n,i=0,bin[32];
    cout << "enter decimal number : ";
    cin >> dec;
    //to calculate decimal to binary number 
    while(dec>0){
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
    //to print binary number from array in reverse
    cout << "binary number : ";
    for(n=i-1;n>=0;n--){
        cout << bin[n];
    }
    return 0;
}