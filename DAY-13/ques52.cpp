//Write a program to Count even and odd elements.
#include <iostream>
using namespace std;
int main(){
    int n,i,ceven=0,codd=0;
    cout << "enter number of elements of array : ";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){            //for inserting array element
        cout << "enter element " << i+1 << " : ";
        cin >> a[i];
    }
    //counting odd and even 
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            ceven++;
        }
        else{
            codd++;
        }
    }
    cout << "even elements are : " << ceven << '\n';
    cout<< "odd elements are : " << codd << "\n";
    return 0;
}