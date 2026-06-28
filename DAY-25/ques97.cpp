//Write a program to Merge two sorted arrays.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n1,n2;    
    cout << "enter size of first sorted array : ";
    cin >> n1;
    int a[n1];
    cout << "enter elements of first sorted array : ";
    for(i=0; i<n1; i++){
        cin >> a[i];
    }    
    cout << "enter size of second sorted array : ";
    cin >> n2;
    int b[n2];
    cout << "enter elements of second sorted array : ";
    for(i=0; i<n2; i++){
        cin >> b[i];
    }    
    // The final array size must be the sum of both individual sizes
    int c[n1 + n2];    
    i = 0; // Pointer for array a
    j = 0; // Pointer for array b
    k = 0; // Pointer for merged array c    
    //for merging elements while both arrays have items left
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }    
    //for copying remaining elements of first array (if any)
    while(i < n1){
        c[k] = a[i];
        i++;
        k++;
    }    
    //for copying remaining elements of second array (if any)
    while(j < n2){
        c[k] = b[j];
        j++;
        k++;
    }    
    cout << "merged sorted array : ";
    for(i=0; i < n1 + n2; i++){
        cout << c[i] << " ";
    }
    cout << "\n";
    return 0;
}
