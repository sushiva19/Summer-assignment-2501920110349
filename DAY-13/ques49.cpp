//Write a program to Input and display array.
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter number of elements in array : ";
    cin >> n;
    int a[n];
    //for input array elements
    for(i=1;i<=n;i++){
        cout << "enter element " << i << " : ";
        cin >> a[i];
    }
    //for display of array
    cout << "elements of array are : ";
    for(i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    return 0;
}