//Write a program to Find pair with given sum. 
#include <iostream>
using namespace std;
int main(){
    int i,j,target=0,n;
    cout << "enter no of elements of arrray : ";
    cin >> n;
    int a[n];
    //for entering array elements
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    cout << "enter the target sum : ";
    cin >> target;
    //for printing pair 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]!=a[j]){
                if(a[i]+a[j]==target){
                cout << "pair with given sum : " << a[i] << " " << a[j] << "\n";
                break;
                }
            }
        }
    }
    return 0;
}