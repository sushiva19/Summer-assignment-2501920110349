//Write a program to Create menu-driven calculator.
#include <iostream>
using namespace std;
int main(){
    int choice;
    double num1, num2, result;
    cout << "--- Simple Calculator Menu ---\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    // Check for valid menu choice before asking for numbers
    if(choice >= 1 && choice <= 4){
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;      
        if(choice == 1){
            result = num1 + num2;
            cout << "\nResult: " << num1 << " + " << num2 << " = " << result << "\n";
        }
        else if(choice == 2){
            result = num1 - num2;
            cout << "\nResult: " << num1 << " - " << num2 << " = " << result << "\n";
        }
        else if(choice == 3){
            result = num1 * num2;
            cout << "\nResult: " << num1 << " * " << num2 << " = " << result << "\n";
        }
        else if(choice == 4){
            // Protect against dividing by zero error
            if(num2 != 0){
                result = num1 / num2;
                cout << "\nResult: " << num1 << " / " << num2 << " = " << result << "\n";
            }
            else{
                cout << "\nError: Division by zero is not allowed!\n";
            }
        }
    }
    else{
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
