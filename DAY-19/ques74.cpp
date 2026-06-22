//Write a program to Subtract matrices.
#include <iostream>
using namespace std;
int main(){
    int i,j,k,r,c;
    cout << "enter now of rows : ";
    cin >> r;
    cout << "enter no of columns : ";
    cin >> c;
    //for entering matrices
    int a[r][c];
    int b[r][c];
    int s[r][c];
    cout << "enter first matrix : ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    cout << "enter second matrix : ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }

    //for calculating sum
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            s[i][j]=a[i][j]-b[i][j];
        }
    }
    cout << "sum of matrices : " << "\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}