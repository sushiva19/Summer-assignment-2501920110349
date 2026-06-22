//Write a program to Selection sort. 
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
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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