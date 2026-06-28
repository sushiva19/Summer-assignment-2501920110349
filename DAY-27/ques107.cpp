//Write a program to Create salary management system.
#include <iostream>
using namespace std;

// Structure to manage salary breakdown
struct SalaryRecord {
    int id;
    string name;
    double base_pay;
    double hra; // House Rent Allowance
    double da;  // Dearness Allowance
    double gross_salary;
};

int main(){
    int i;
    int total_records = 3; // Fixed size to keep the system simple
    SalaryRecord emp[total_records]; 
    cout << "--- Enter Salary Payroll Details ---\n\n";
    //for entering payroll records
    for(i = 0; i < total_records; i++) {
        cout << "Payroll for Employee " << i + 1 << "\n";
        
        cout << "Enter Employee ID: ";
        cin >> emp[i].id;
        cin.ignore(); // Clear newline buffer before using getline
        
        cout << "Enter Full Name: ";
        getline(cin, emp[i].name);
        
        cout << "Enter Base Monthly Pay: $";
        cin >> emp[i].base_pay;
        
        cout << "Enter House Rent Allowance (HRA): $";
        cin >> emp[i].hra;
        
        cout << "Enter Dearness Allowance (DA): $";
        cin >> emp[i].da;
        
        //for calculating total gross salary
        emp[i].gross_salary = emp[i].base_pay + emp[i].hra + emp[i].da;
        cout << "\n";
    }
    cout << "--- Payroll Ledger Statement ---\n";
    cout << "ID\tName\t\tBase Pay\tAllowances\tGross Salary\n";
    cout << "----------------------------------------------------------------------------\n";
    //for displaying payroll table
    for(i = 0; i < total_records; i++) {
        double total_allowances = emp[i].hra + emp[i].da;
        cout << emp[i].id << "\t" 
             << emp[i].name << "\t\t$" 
             << emp[i].base_pay << "\t\t$" 
             << total_allowances << "\t\t$" 
             << emp[i].gross_salary << "\n";
    }
    return 0;
}
