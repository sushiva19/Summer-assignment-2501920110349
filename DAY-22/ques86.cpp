//Write a program to Count words in a sentence.
#include <iostream>
using namespace std;
int main(){
    int i,words=1; // Start at 1 because the last word won't have a space after it
    string str;
    cout << "enter full sentence : ";
    getline(cin, str);
    //for counting words
    for(i=0; str[i] != '\0'; i++){
        // Check if the current character is a space and the next character is not a space
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0'){
            words++;
        }
    }    
    // Handle the edge case where the user inputs an empty line
    if(str[0] == '\0'){
        words = 0;
    }    
    cout << "total words : " << words << "\n";
    return 0;
}
