//Write a program to Find diagonal sum.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,size,sum=0;
    cout << "enter size of square matrix (rows/columns) : ";
    cin >> size;
    
    //for entering matrix
    int a[size][size];
    
    cout << "\n--- Enter Matrix Elements ---\n";
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            cout << "Enter element at row " << i+1 << ", col " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    //for calculating diagonal sum
    for(i=0;i<size;i++){
        sum = sum + a[i][i]; // FIXED: Diagonal elements always have matching row and column indices (0,0), (1,1), etc.
    }
    
    cout << "\nSum of primary diagonal elements : " << sum << "\n";
    return 0;
}
