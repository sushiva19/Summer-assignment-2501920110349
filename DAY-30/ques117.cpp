//Write a program to Create student record system using arrays and strings.
#include <iostream>
using namespace std;
int main(){
    int i, choice;
    string search_name;
    int total_students = 3;
    // Declaring arrays to store information separately
    int roll_numbers[total_students];
    string names[total_students];
    float marks[total_students];
    
    roll_numbers[0] = 101; names[0] = "John Doe";   marks[0] = 85.5;
    roll_numbers[1] = 102; names[1] = "Jane Smith"; marks[1] = 92.0;
    roll_numbers[2] = 103; names[2] = "Alex Carey"; marks[2] = 74.2;

    cout << "--- Welcome to the Student Record System ---\n";
    cout << "1. Display All Student Records\n";
    cout << "2. Search Student Details by Name\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;
    cin.ignore(); // Clear newline buffer before handling string inputs
    // Operation 1: Display all student listings
    if(choice == 1){
        cout << "\nRoll No\tName\t\tMarks\n";
        cout << "-------------------------------------\n";
        for(i = 0; i < total_students; i++){
            cout << roll_numbers[i] << "\t" << names[i];
            
            // Adjust tabs depending on name length for alignment
            if(names[i].length() < 8) cout << "\t\t";
            else cout << "\t";
            
            cout << marks[i] << "\n";
        }
    }
    // Operation 2: Search Student Details by Name
    else if(choice == 2){
        cout << "\nEnter exact student name to search: ";
        getline(cin, search_name);
        
        int found = 0;
        // Scan the parallel names array for a string match
        for(i = 0; i < total_students; i++){
            if(names[i] == search_name){
                found = 1;
                cout << "\n--- Student Record Found ---\n";
                cout << "Roll Number : " << roll_numbers[i] << "\n";
                cout << "Student Name: " << names[i] << "\n";
                cout << "Total Marks : " << marks[i] << "\n";
                break; // Exit search early after finding a match
            }
        }
        if(found == 0){
            cout << "\nError: Student named '" << search_name << "' not found.\n";
        }
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
