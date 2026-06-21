// Write a program to Remove duplicates from array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    int Size = 0; 
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        // Check if we already saw this number before
        for(int j = 0; j < Size; j++) {
            if(a[i] == a[j]) {
                isDuplicate = 1; // Found a duplicate
                break;
            }
        }
        if(isDuplicate == 0) {
            a[Size] = a[i];
            Size++;
        }
    }
    cout << "updated array : ";
    for(int i = 0; i < Size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}