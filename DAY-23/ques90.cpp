//Write a program to Find first repeating character.
#include <iostream>
using namespace std;
int main(){
    int i,j,found=0;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    //for finding the first repeating character
    for(i=0; str[i] != '\0'; i++){
        
        // Skip checking empty spaces
        if(str[i] == ' '){
            continue;
        }

        // Loop through the remaining characters ahead
        for(j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                cout << "first repeating character : " << str[i] << "\n";
                found = 1;
                break; // Break the inner loop
            }
        }

        // Exit the program immediately after printing the first match found
        if(found == 1){
            return 0; 
        }
    }

    cout << "no repeating character found\n";
}
