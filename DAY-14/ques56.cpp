//Write a program to Find duplicates in array.
#include <iostream>
using namespace std;
int main(){
    int n,i,j,e=0,duplicate=0;
    cout << "enter the number of elements : ";
    cin >> n;
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //to check for duplicates
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                e=a[i];
                duplicate=1;
                break;
            }
        }
    }
    if(duplicate==0){
        cout << "duplicate not found";
    }
    else{
        cout << e << " is the duplicate element of the aaray ";
    }
    return 0;
}    