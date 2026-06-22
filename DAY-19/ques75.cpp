//Write a program to Transpose matrix.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,r,c;
    cout << "enter no of rows : ";
    cin >> r;
    cout << "enter no of columns : ";
    cin >> c;
    
    //for entering matrix
    int a[r][c];
    int t[c][r]; 
    cout << "\n--- Enter Original Matrix ---\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << "Enter element at row " << i+1 << ", col " << j+1 << ": ";
            cin >> a[i][j];
        }
    }
    //for calculating transpose
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[j][i] = a[i][j]; 
        }
    }   
    cout << "\nTranspose of matrix : \n";
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            cout << t[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
