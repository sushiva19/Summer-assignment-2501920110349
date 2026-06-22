//Write a program to Remove duplicate characters.
#include <iostream>
using namespace std;
int main(){
    int i,j,is_duplicate;
    string str;
    string result = ""; // Empty string to store unique characters
    
    cout << "enter full string : ";
    getline(cin, str);

    //for removing duplicate characters
    for(i=0; str[i] != '\0'; i++){
        is_duplicate = 0; // Assume character is unique initially
        
        // Loop backward to check if this character appeared before
        for(j=0; j<i; j++){
            if(str[i] == str[j]){
                is_duplicate = 1; // Found a match earlier in the string
                break;            // Stop checking further
            }
        }
        
        // If it never appeared before, append it to the result
        if(is_duplicate == 0){
            result = result + str[i];
        }
    }
    
    cout << "string after removing duplicates : " << result << "\n";
    return 0;
}
