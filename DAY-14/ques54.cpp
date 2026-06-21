//Write a program to Frequency of an element.
#include <iostream>
using namespace std;
int main(){
    int i,j,n,ecount=0,target=0;
    cout << "enter number of elements : ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //count element
    cout << "enter element to count frequency : ";
    cin >> target;
    for(i=0;i<n;i++){
        if(a[i]==target){
            ecount++;
        }
    }
    cout << "frequency of the element : " << ecount;
    return 0;
}