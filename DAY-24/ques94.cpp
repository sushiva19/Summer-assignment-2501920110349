//Write a program to Compress a string.
#include <iostream>
using namespace std;
int main(){
    int i,count;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    cout << "compressed string : ";
    //for compressing the string
    for(i=0; str[i] != '\0'; i++){
        count = 1; // Start count at 1 for the current character
        
        // Loop as long as the next character is identical to the current one
        while(str[i] == str[i+1] && str[i+1] != '\0'){
            count++;
            i++; // Advance the main pointer to skip past the duplicate character
        }
        
        // Print the character and its consecutive occurrence count
        cout << str[i] << count;
    }
    cout << "\n";
    return 0;
}
