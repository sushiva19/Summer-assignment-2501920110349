//Write a program to Find longest word.
#include <iostream>
using namespace std;
int main(){
    int i, word_start = 0, current_len = 0, max_len = 0, longest_start = 0;
    string str;
    
    cout << "enter full sentence : ";
    getline(cin, str);

    //for finding the longest word
    for(i=0; ; i++){
        // If we hit a space or the end of the string, a word has ended
        if(str[i] == ' ' || str[i] == '\0'){
            if(current_len > max_len){
                max_len = current_len;
                longest_start = word_start; // Record where the longest word began
            }
            
            // Reset for the next word
            current_len = 0;
            word_start = i + 1; // The next word starts after the space
        }
        else {
            current_len++; // Build the length of the current word
        }

        // Break the loop manually at the end marker so we process the last word first
        if(str[i] == '\0'){
            break;
        }
    }
    
    cout << "longest word : ";
    //for printing the longest word character by character
    for(i = longest_start; i < longest_start + max_len; i++){
        cout << str[i];
    }
    cout << "\n";
    cout << "length of longest word : " << max_len << "\n";
    return 0;
}
