//Write a program to Reverse a string.
#include <iostream>
using namespace std;
int main(){
    int i,length=0;
    string str;
    cout << "enter full string : ";
    getline(cin, str);
    //for calculating length first
    for(i=0; str[i] != '\0'; i++){
        length++;
    }
    cout << "reversed string : ";
    //for printing backwards from the last character
    for(i=length-1; i>=0; i--){
        cout << str[i];
    }
    cout << "\n";
    return 0;
}
