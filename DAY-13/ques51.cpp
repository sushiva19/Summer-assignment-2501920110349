//Write a program to Find largest and smallest element.
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter number of elements in array : ";
    cin >> n;
    int a[n];
    //for input array elements
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //for searching large and smallest element
    int largest = a[0]; 
    int smallest = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] < smallest) {
            smallest = a[i];
        }
        if(a[i] > largest) {
            largest = a[i];
        }
    }
    cout << "smallest element : " << smallest << "\n";
    cout << "largest element : " << largest << "\n";
    return 0;
}