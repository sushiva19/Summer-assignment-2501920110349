//Write a program to Find string length without strlen().
#include <iostream>
using namespace std;
int main(){
    int i,length=0;
    string str;
    cout << "enter full string : ";
    getline(cin, str); // Reads the full line including spaces
    //for calculating length
    for(i=0; str[i] != '\0'; i++){
        length++; // Increments the counter for every character found
    }
    cout << "length of string : " << length << "\n";
    return 0;
}
