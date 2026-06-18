//Write a program to Find largest prime factor
#include <iostream>
using namespace std;
int main(){
    int i,n,lfact=0;
    cout << "enter number : ";
    cin >> n;
    for(i=2;i*i<=n;i++){
        while (n % i == 0) {
            lfact = i;
            n = n / i;
        }
    }
    if (n > 1) {
        lfact = n;
    }
    if(lfact==0){
        cout << "no prime factor found";
    }
    else{
        cout << "larget prime factor is : " << lfact;
    }
    return 0;
}