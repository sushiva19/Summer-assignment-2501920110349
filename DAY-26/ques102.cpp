//Write a program to Create voting eligibility system.
#include <iostream>
using namespace std;
int main(){
    int age, years_left;
    cout << "enter your age : ";
    cin >> age;
    //for checking voting eligibility
    if(age >= 18){
        cout << "status : eligible to vote!\n";
    }
    else{
        years_left = 18 - age; // Calculate remaining years
        cout << "status : not eligible to vote.\n";
        cout << "you need to wait " << years_left << " more years to vote.\n";
    }
    return 0;
}
