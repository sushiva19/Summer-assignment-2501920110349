//Write a program to Create ATM simulation.
#include <iostream>
using namespace std;
int main(){
    int choice;
    double balance = 5000.0; // Starting default balance
    double amount;
    while(true){
        cout << "--- Welcome to the ATM ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        //for processing the selected ATM operation
        if(choice == 1){
            cout << "\nYour current balance is: $" << balance << "\n";
        }
        else if(choice == 2){
            cout << "\nEnter amount to deposit: $";
            cin >> amount;
            
            if(amount > 0){
                balance = balance + amount;
                cout << "Successfully deposited! New balance: $" << balance << "\n";
            }
            else{
                cout << "Invalid deposit amount!\n";
            }
        }
        else if(choice == 3){
            cout << "\nEnter amount to withdraw: $";
            cin >> amount;
            
            // Check if amount is valid and if there are enough funds
            if(amount > 0 && amount <= balance){
                balance = balance - amount;
                cout << "Successfully withdrawn! New balance: $" << balance << "\n";
            }
            else if(amount > balance){
                cout << "Transaction failed! Insufficient balance.\n";
            }
            else{
                cout << "Invalid withdrawal amount!\n";
            }
        }
        else if(choice == 4){
            cout << "\nThank you for using our ATM. Goodbye!\n";
            break;
        }
        else{
            cout << "\nInvalid choice selection!\n";
        }
        }
        
    return 0;
}
