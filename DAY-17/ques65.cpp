//Write a program to Merge arrays.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout << "enter nof of elements of the array : ";
    cin >> n;
    int a[n];
    int b[n];
    int m[n];
    //for entering first array
    cout << "enter first array elements" << "\n";
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //for entering second array
    cout << "enter second array elements" << "\n";
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> b[i];
    }
    //merging of the arrays
    for(i=0;i<n;i++){
        m[i]=a[i]+b[i];
    }
    cout << "merged array : ";
    //printing merged array
    for(i=0;i<n;i++){
        cout << m[i] << " ";
    }
    return 0;
}