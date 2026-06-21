//Write a program to Find maximum frequency element.
#include <iostream>
using namespace std;
int main(){
    int i,e,n;
    cout << "enter no of elements of array : ";
    cin >> n;
    int a[n];
    //enter the elements
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //to count frequency
    int freq=0;
    cout << "enter the element to count frequency : ";
    cin >> e;
    for(i=0;i<n;i++){
        if(a[i]==e){
            freq++;
        }
    }
    cout << "maximum frequency of the element : " << freq;
    return 0;
}