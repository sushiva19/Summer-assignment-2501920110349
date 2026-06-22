//Write a program to Remove spaces from string.
#include <iostream>
using namespace std;
int main(){
    int i;
    string str;
    string result = ""; // Empty string to store the clean text    
    cout << "enter full string : ";
    getline(cin, str);
    //for removing spaces
    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            result = result + str[i]; // Append the non-space character
        }
    }    
    cout << "string without spaces : " << result << "\n";
    return 0;
}
