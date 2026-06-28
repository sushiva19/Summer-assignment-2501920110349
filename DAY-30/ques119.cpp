//Write a program to Create mini employee management system.
#include <iostream>
using namespace std;
int main(){
    int i, choice, search_id;
    int total_employees = 3; 
   
    int emp_ids[total_employees];
    string names[total_employees];
    double salaries[total_employees];
    
    emp_ids[0] = 101; names[0] = "Alice Smith";   salaries[0] = 4500.50;
    emp_ids[1] = 102; names[1] = "Robert Jones";  salaries[1] = 5200.00;
    emp_ids[2] = 103; names[2] = "Charlie Brown"; salaries[2] = 3800.25;

    cout << "--- Welcome to the Mini Employee Management System ---\n";
    cout << "1. Display All Employee Records\n";
    cout << "2. Search Employee by ID\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Operation 1: Display all employee records
    if(choice == 1){
        cout << "\nID\tName\t\t\tSalary\n";
        cout << "------------------------------------------\n";
        for(i = 0; i < total_employees; i++){
            cout << emp_ids[i] << "\t" << names[i];
            
            // Adjust tabs depending on name length for alignment
            if(names[i].length() < 8) cout << "\t\t\t$";
            else if(names[i].length() < 16) cout << "\t\t$";
            else cout << "\t$";
            
            cout << salaries[i] << "\n";
        }
    }
    // Operation 2: Search Employee by ID
    else if(choice == 2){
        cout << "\nEnter Employee ID to search: ";
        cin >> search_id;
        
        int found = 0;
        // Scan the parallel ID array for a match
        for(i = 0; i < total_employees; i++){
            if(emp_ids[i] == search_id){
                found = 1;
                cout << "\n--- Employee Record Found ---\n";
                cout << "Employee ID: " << emp_ids[i] << "\n";
                cout << "Full Name  : " << names[i] << "\n";
                cout << "Monthly Pay: $" << salaries[i] << "\n";
                break; // Exit search early after finding the match
            }
        }
        if(found == 0){
            cout << "\nError: Employee ID " << search_id << " not found.\n";
        }
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
