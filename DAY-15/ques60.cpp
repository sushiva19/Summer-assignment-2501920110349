//Write a program to Move zeroes to end.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout << "enter the no of elements in array : ";
    cin >> n;
    int a[n];
    int ua[n]={0};
    int index=0;
    //entering elements of array
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //move zeros to the end
    for(i=0;i<n;i++){
        if(a[i]!=0){
            ua[index]=a[i];
            index++;
        }
    }
    //print array with zeros at end
    cout << "array with zeros at end : ";
    for(i=0;i<n;i++){
        cout << ua[i] << " ";
    }
    return 0;
}