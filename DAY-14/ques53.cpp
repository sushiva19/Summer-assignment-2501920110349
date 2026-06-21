//Write a program to Linear search.
#include <iostream>
using namespace std;
int main(){
    int n,i,target,result=0;
    cout << "enter the number of elements : ";
    cin >> n;
    int a[n];
    //enter array elements
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //target
    cout << "enter element to search : ";
    cin >> target;
    //linear search 
    for(i=0;i<n;i++){
        if(a[i]==target){
            result=i;
            break;
        }
    }
    if(result!=0){
        cout << "element found at index : " << result;
    }
    else{
        cout << "element not found ";
    }
    return 0;
}