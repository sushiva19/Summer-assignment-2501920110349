//Write a program to Find column-wise sum
#include <iostream>
using namespace std;
int main() {
    int r, c;
    //Input dimensions of the matrix
    cout << "Enter rows and columns for the matrix: ";
    cin >> r >> c;
    int matrix[10][10];
    //Input elements of the matrix
    cout << "\nEnter elements of the matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    //Calculate and display row-wise sum
    cout << "\nOutput Row-wise Sum:" << endl;
    for (int i = 0; i < c; ++i) {
        int rowSum = 0; // Reset sum for each new row
        for (int j = 0; j < r; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }
    return 0;
}
