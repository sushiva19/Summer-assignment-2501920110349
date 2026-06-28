//Write a program to Sort names alphabetically.
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    string temp; 
    cout << "enter number of names : ";
    cin >> n;
    cin.ignore();  
    string names[n];   
    cout << "enter names :\n";
    for(i=0; i<n; i++){
        cout << "Enter name " << i+1 << ": ";
        getline(cin, names[i]);
    }
    //for sorting names alphabetically (Bubble Sort)
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            // If the current name is alphabetically greater than the next name
            if(names[j] > names[j+1]){
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }    
    cout << "\nnames in alphabetical order :\n";
    for(i=0; i<n; i++){
        cout << names[i] << "\n";
    }
}
