//Write a program to Bubble sort.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n,temp=0;
    cout << "enter no of elements of array : ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //bubble sort
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //printing sorted array
    cout << "Sorted array : ";
    for(i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}