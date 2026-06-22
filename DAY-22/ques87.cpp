//Write a program to Character frequency.
#include <iostream>
using namespace std;
int main(){
    int i,j,count;
    string str;    
    cout << "enter full string : ";
    getline(cin, str);    
    cout << "\ncharacter frequencies:\n";
    //for checking frequency of each character
    for(i=0; str[i] != '\0'; i++){
        // Skip spaces and characters that we already counted and marked as '\0'
        if(str[i] == ' ' || str[i] == '\0'){
            continue;
        }        
        count = 1; // Start count at 1 for the current character        
        // Loop through the rest of the string to look for duplicates
        for(j=i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count++;
                str[j] = '\0'; // Mark this duplicate as visited so we skip it later
            }
        }      
        cout << str[i] << " appears " << count << " times\n";
    }
    return 0;
}
