//program to print sum of first n natural numbers
#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout << "enter number n:";
    cin >> n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout << "sum of first " << n <<" natural numbers = " << sum;
    return 0;
}