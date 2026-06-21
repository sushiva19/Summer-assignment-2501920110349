//Write a program to Rotate array right.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    //for entering array elements
    cout << "enter no of elements of array : ";
    cin >> n;
    int a[n];
    int ra[n]={0};
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //for rotating array right
    for(i = 0; i < n; i++) {
        ra[i]=a[i-1];
    }
    ra[0]=a[n-1];
    cout << "right rotated array: ";
    for(i = 0; i < n; i++) {
        cout << ra[i] << " ";
    }
    return 0;
}