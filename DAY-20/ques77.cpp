//Write a program to Multiply matrices.
#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    // Input dimensions of the first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    // Step 2: Input dimensions of the second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    // Columns of the first matrix must equal rows of the second matrix
    if (c1 != r2) {
        cout << "Error! Matrix multiplication is not possible." << endl;
        return 0;
    }
    int a[10][10], b[10][10], result[10][10]={0};
    // Input elements of the first matrix
    cout << "\nEnter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }
    //Input elements of the second matrix
    cout << "\nEnter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j];
        }
    }
    //Multiply the two matrices using three nested loops
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    //Display the final result matrix
    cout << "\nOutput Resultant Matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
