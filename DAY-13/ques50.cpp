//Write a program to Find sum and average of array.
#include <iostream>
using namespace std;
int main(){
    int n,i;
    double avg=0,sum=0;
    cout << "enter number of elements of array : ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){            //for inserting array element
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //to find sum 
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    //to find avg
    avg=sum/n;
    cout << "sum of the array : " << sum << "\n";
    cout << "average of the array : " << avg << "\n";
    return 0;
}