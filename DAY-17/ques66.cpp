//Write a program to Union of arrays.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout << "enter nof of elements of the array : ";
    cin >> n;
    int a[n];
    int b[n];
    int u[50];
    int totalElements = n;
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
    //for creating union of arrays
    for(i=0;i<n;i++){
        u[i]=a[i];
    }
    for(i = 0; i < n; i++) {
        bool isDuplicate = false;
        
        // Check if b[i] already exists in our union array so far
        for(j = 0; j < totalElements; j++) {
            if(b[i] == u[j]) {
                isDuplicate = true;
                break;
            }
        }
        // If it's a new unique element, add it
        if(!isDuplicate) {
            u[totalElements] = b[i];
            totalElements++;
        }
    }
    //printing of union array
    cout << "union array : ";
    for(i=0;i<totalElements;i++){
        cout << u[i] << " ";
    }
    return 0;
}