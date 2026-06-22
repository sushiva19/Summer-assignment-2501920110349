//Write a program to Find first non-repeating character.
#include <iostream>
using namespace std;
int main(){
    int i,j,is_repeating;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    //for finding the first non-repeating character
    for(i=0; str[i] != '\0'; i++){
        is_repeating = 0; // Assume the character is unique at first
        
        // Skip checking empty spaces
        if(str[i] == ' '){
            continue;
        }

        // Loop through the entire string to check for duplicates
        for(j=0; str[j] != '\0'; j++){
            // If it matches a character at a different index position
            if(str[i] == str[j] && i != j){
                is_repeating = 1; // Found a duplicate
                break;            // Stop checking the rest of the string for this letter
            }
        }

        // If the character went through the whole string without a match
        if(is_repeating == 0){
            cout << "first non-repeating character : " << str[i] << "\n";
            return 0; // Exit the program immediately after finding the first one
        }
    }

    cout << "no non-repeating character found\n";
    return 0;
}
