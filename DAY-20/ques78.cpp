//Write a program to Check symmetric matrix.
#include <iostream>
using namespace std;
int main() {
    int r, c;
    // Input dimensions of the matrix
    cout << "Enter rows and columns for the matrix: ";
    cin >> r >> c;
    //  A symmetric matrix must be square (rows must equal columns)
    if (r != c) {
        cout << "The matrix is not square, so it cannot be symmetric." << endl;
        return 0;
    }
    int matrix[10][10];
    bool isSymmetric = true;
    // Input elements of the matrix
    cout << "\nEnter elements of the matrix:" << endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }
    //Check symmetry by comparing element (i, j) with (j, i)
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break; // Exit inner loop early if a mismatch is found
            }
        }
        if (!isSymmetric) break; // Exit outer loop
    }
    //Display the result
    if (isSymmetric) {
        cout << "\nThe matrix is Symmetric." << endl;
    } else {
        cout << "\nThe matrix is NOT Symmetric." << endl;
    }
    return 0;
}
