//Write a program to Create menu-driven string operations system.
#include <iostream>
using namespace std;
int main(){
    int i, j, choice, length = 0;
    string str;
    cout << "enter full string : ";
    getline(cin, str);
    //for calculating string length first
    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    cout << "\n--- String Operations Menu ---\n";
    cout << "1. Reverse the String\n";
    cout << "2. Convert to Uppercase\n";
    cout << "3. Check if Palindrome\n";
    cout << "4. Find Character at Position\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Operation 1: Reverse the string
    if(choice == 1){
        cout << "reversed string : ";
        for(i = length - 1; i >= 0; i--){
            cout << str[i];
        }
        cout << "\n";
    }
    // Operation 2: Convert to uppercase
    else if(choice == 2){
        for(i = 0; str[i] != '\0'; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
        cout << "uppercase string : " << str << "\n";
    }
    // Operation 3: Check if palindrome
    else if(choice == 3){
        int flag = 1;
        j = length - 1;
        for(i = 0; i < j; i++){
            if(str[i] != str[j]){
                flag = 0;
                break;
            }
            j--;
        }
        if(flag == 1){
            cout << "status : string is a palindrome\n";
        }
        else{
            cout << "status : string is not a palindrome\n";
        }
    }
    // Operation 4: Find character at a given position
    else if(choice == 4){
        int pos;
        cout << "enter position to check (1 to " << length << "): ";
        cin >> pos;
        
        // Convert user position (1-based) to array index (0-based)
        int index = pos - 1;
        if(index >= 0 && index < length){
            cout << "character at position " << pos << " is: " << str[index] << "\n";
        }
        else{
            cout << "Error: Invalid position target!\n";
        }
    }
    else{
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
