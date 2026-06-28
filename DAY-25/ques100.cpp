//Write a program to Sort words by length.
#include <iostream>
using namespace std;
int main(){
    int i,j,n,len1,len2;
    string temp;   
    cout << "enter number of words : ";
    cin >> n;   
    string words[n];   
    cout << "enter words :\n";
    for(i=0; i<n; i++){
        cout << "Enter word " << i+1 << ": ";
        cin >> words[i]; // Reads individual words
    }
    //for sorting words by length (Bubble Sort)
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            
            //for calculating length of words[j] manually
            len1 = 0;
            for(int k=0; words[j][k] != '\0'; k++){
                len1++;
            }
            
            //for calculating length of words[j+1] manually
            len2 = 0;
            for(int k=0; words[j+1][k] != '\0'; k++){
                len2++;
            }
            
            // If the current word length is greater than the next word length
            if(len1 > len2){
                temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }   
    cout << "\nwords sorted by length :\n";
    for(i=0; i<n; i++){
        cout << words[i] << "\n";
    }
    return 0;
}
