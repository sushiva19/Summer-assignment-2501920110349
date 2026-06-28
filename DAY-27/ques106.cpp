//Write a program to Create employee management system.
#include <iostream>
using namespace std;

// Structure to group employee information together
struct Employee {
    int id;
    string name;
    double salary;
};
int main(){
    int i;
    int total_employees = 3; // Fixed size to keep the system simple
    Employee e[total_employees]; // Array of employee structures
    
    cout << "--- Enter Employee Records ---\n\n";
    //for entering records
    for(i = 0; i < total_employees; i++) {
        cout << "Recording Data for Employee " << i + 1 << "\n";
        
        cout << "Enter Employee ID: ";
        cin >> e[i].id;
        cin.ignore(); // Clear newline buffer before using getline
        
        cout << "Enter Full Name: ";
        getline(cin, e[i].name);
        
        cout << "Enter Salary: $";
        cin >> e[i].salary;
        cout << "\n";
    }
    cout << "--- Displaying All Employee Records ---\n";
    cout << "ID\tName\t\tSalary\n";
    cout << "-------------------------------------\n";
    //for displaying records
    for(i = 0; i < total_employees; i++) {
        cout << e[i].id << "\t" << e[i].name << "\t\t$" << e[i].salary << "\n";
    }
    return 0;
}
