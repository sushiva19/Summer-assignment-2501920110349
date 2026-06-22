//Write a program to Check string rotation.
#include <iostream>
using namespace std;
int main(){
    int i, j, len1 = 0, len2 = 0, found = 0;
    string str1, str2, temp;
    
    cout << "enter first string : ";
    getline(cin, str1);
    cout << "enter second string : ";
    getline(cin, str2);

    //for calculating length of first string
    for(i=0; str1[i] != '\0'; i++){
        len1++;
    }
    //for calculating length of second string
    for(i=0; str2[i] != '\0'; i++){
        len2++;
    }

    //if lengths are not equal, they cannot be rotations
    if(len1 != len2){
        cout << "strings are not rotations\n";
        return 0;
    }

    //for concatenating the first string with itself
    temp = str1 + str1;

    //for checking if str2 exists inside the doubled string (temp)
    //we only need to loop up to the point where str2 could still fit
    for(i=0; i <= (len1 * 2) - len2; i++){
        found = 1; // Assume match starts at this index position
        
        for(j=0; j < len2; j++){
            if(temp[i + j] != str2[j]){
                found = 0; // Mismatch found
                break;
            }
        }
        
        // If a perfect match was found for the whole length of str2
        if(found == 1){
            cout << "strings are rotations of each other\n";
            return 0;
        }
    }

    cout << "strings are not rotations\n";
    return 0;
}
