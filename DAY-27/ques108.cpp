//Write a program to Create marksheet generation system.
#include <iostream>
using namespace std;

// Structure to group marksheet information together
struct Marksheet {
    int roll_no;
    string name;
    int maths;
    int science;
    int english;
    int total;
    float percentage;
    string grade;
};

int main(){
    int i;
    int total_students = 1; // Generates marksheet for 1 student to keep it simple
    Marksheet s[total_students];
    
    cout << "--- Student Marksheet Entry System ---\n\n";
    //for entering student data
    for(i = 0; i < total_students; i++) {
        cout << "Enter Roll Number: ";
        cin >> s[i].roll_no;
        cin.ignore(); // Clear newline buffer before using getline
        
        cout << "Enter Full Name: ";
        getline(cin, s[i].name);
        
        cout << "Enter Marks for Maths (out of 100): ";
        cin >> s[i].maths;
        
        cout << "Enter Marks for Science (out of 100): ";
        cin >> s[i].science;
        
        cout << "Enter Marks for English (out of 100): ";
        cin >> s[i].english;
        
        //for calculating total and percentage
        s[i].total = s[i].maths + s[i].science + s[i].english;
        s[i].percentage = (s[i].total / 300.0) * 100;
        
        //for assigning grade based on percentage
        if(s[i].percentage >= 80) {
            s[i].grade = "A (Excellent)";
        }
        else if(s[i].percentage >= 60) {
            s[i].grade = "B (Good)";
        }
        else if(s[i].percentage >= 40) {
            s[i].grade = "C (Pass)";
        }
        else {
            s[i].grade = "F (Fail)";
        }
    }

    //for generating and displaying the final printed marksheet card
    cout << "\n=========================================\n";
    cout << "           OFFICIAL MARKSHEET            \n";
    cout << "=========================================\n";
    cout << "Roll Number : " << s[0].roll_no << "\n";
    cout << "Student Name: " << s[0].name << "\n";
    cout << "-----------------------------------------\n";
    cout << "SUBJECT          MAX MARKS    OBTAINED   \n";
    cout << "-----------------------------------------\n";
    cout << "Maths            100          " << s[0].maths << "\n";
    cout << "Science          100          " << s[0].science << "\n";
    cout << "English          100          " << s[0].english << "\n";
    cout << "-----------------------------------------\n";
    cout << "TOTAL MARKS:     300          " << s[0].total << "\n";
    cout << "PERCENTAGE:                   " << s[0].percentage << "%\n";
    cout << "FINAL GRADE:                  " << s[0].grade << "\n";
    cout << "=========================================\n";
    return 0;
}
