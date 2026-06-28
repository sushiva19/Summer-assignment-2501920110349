//Write a program to Create bank account system.
#include <iostream>
using namespace std;

// Structure to group bank account information together
struct Account {
    int account_no;
    string holder_name;
    double balance;
};

int main(){
    int i, choice, search_acc;
    double amount;
    int total_accounts = 3; // Fixed database size to keep it simple
    Account acc[total_accounts];
    acc[0] = {1001, "prakhar ", 5000.0};
    acc[1] = {1002, "devansh", 1200.50};
    acc[2] = {1003, "mohit", 750.25};
    cout << "--- Welcome to the Bank Account System ---\n";
    cout << "1. Display All Accounts\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Operation 1: Display all account records
    if(choice == 1){
        cout << "\nAcc No\tName\t\t\tBalance\n";
        cout << "------------------------------------------\n";
        for(i = 0; i < total_accounts; i++){
            cout << acc[i].account_no << "\t" << acc[i].holder_name;
            
            // Adjust tabs depending on name size for clean alignment
            if(acc[i].holder_name.length() < 8) cout << "\t\t\t$";
            else if(acc[i].holder_name.length() < 16) cout << "\t\t$";
            else cout << "\t$";
            
            cout << acc[i].balance << "\n";
        }
    }
    // Operation 2: Deposit Money
    else if(choice == 2){
        cout << "\nEnter Account Number: ";
        cin >> search_acc;
        
        int found = 0;
        for(i = 0; i < total_accounts; i++){
            if(acc[i].account_no == search_acc){
                found = 1;
                cout << "Account Holder: " << acc[i].holder_name << "\n";
                cout << "Enter amount to deposit: $";
                cin >> amount;
                
                if(amount > 0){
                    acc[i].balance = acc[i].balance + amount;
                    cout << "Successfully deposited! New Balance: $" << acc[i].balance << "\n";
                }
                else {
                    cout << "Error: Invalid deposit amount!\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Account number not found!\n";
    }
    // Operation 3: Withdraw Money
    else if(choice == 3){
        cout << "\nEnter Account Number: ";
        cin >> search_acc;
        
        int found = 0;
        for(i = 0; i < total_accounts; i++){
            if(acc[i].account_no == search_acc){
                found = 1;
                cout << "Account Holder: " << acc[i].holder_name << "\n";
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                
                // Validate if amount is positive and within account balance limits
                if(amount > 0 && amount <= acc[i].balance){
                    acc[i].balance = acc[i].balance - amount;
                    cout << "Successfully withdrawn! New Balance: $" << acc[i].balance << "\n";
                }
                else if(amount > acc[i].balance){
                    cout << "Transaction Failed: Insufficient balance!\n";
                }
                else {
                    cout << "Error: Invalid withdrawal amount!\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Account number not found!\n";
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
