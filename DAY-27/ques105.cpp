//Write a program to Create student record management system.
#include <iostream>
using namespace std;
// Structure to group student information together
struct Student {
    int roll_no;
    string name;
    float marks;
};
int main(){
    int i;
    int total_students = 3; // Fixed size to keep the system simple
    Student s[total_students]; // Array of student structures
    
    cout << "--- Enter Student Records ---\n\n";
    //for entering records
    for(i = 0; i < total_students; i++) {
        cout << "Recording Data for Student " << i + 1 << "\n";
        
        cout << "Enter Roll Number: ";
        cin >> s[i].roll_no;
        cin.ignore(); // Clear newline buffer before using getline
        
        cout << "Enter Full Name: ";
        getline(cin, s[i].name);
        
        cout << "Enter Marks: ";
        cin >> s[i].marks;
        cout << "\n";
    }
    cout << "--- Displaying All Student Records ---\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "-------------------------------------\n"; 
    //for displaying records
    for(i = 0; i < total_students; i++) {
        cout << s[i].roll_no << "\t" << s[i].name << "\t\t" << s[i].marks << "\n";
    }
    return 0;
}
