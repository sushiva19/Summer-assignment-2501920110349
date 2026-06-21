//Write a program to Intersection of arrays.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout << "enter nof of elements of the array : ";
    cin >> n;
    int a[n];
    int b[n];
    int in[50]={0};
    int totalElements = 0;
    //for entering first array
    cout << "enter first array elements" << "\n";
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //for entering second array
    cout << "enter second array elements" << "\n";
    for(i=0;i<n;i++){
        cout << "enter element " << i+1 << " : ";
        cin >> b[i];
    }
    //for intersection
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
            in[totalElements]=a[i];
            totalElements++;
            break;
            }
        }
    }
    //printing intersection aaray
    cout << "intersection array : ";
    for(i=0;i<totalElements;i++){
        cout << in[i] << " ";
    }
    return 0;
}