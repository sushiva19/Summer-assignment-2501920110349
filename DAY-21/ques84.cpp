//Write a program to Convert lowercase to uppercase.
#include <iostream>
using namespace std;
int main(){
    int i;
    string str;
    
    cout << "enter full string : ";
    getline(cin, str);

    //for converting lowercase to uppercase
    for(i=0; str[i] != '\0'; i++){
        //check if the character is currently a lowercase letter
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32; // Subtract 32 to shift it to uppercase
        }
    }
    
    cout << "uppercase string : " << str << "\n";
    return 0;
}
