//Write a program to Count set bits in a number.
#include <iostream>
using namespace std;
int main(){
    int n,setbits,count=0;
    cout << "enter number : ";
    cin >> n;
    while (n > 0) {
        n = n & (n - 1); // Clears the lowest set bit
        count++;
    }
    cout << "set bits : " << count;
    return 0;
}