//Write a program to Create menu-driven array operations system.
#include <iostream>
using namespace std;
int main(){
    int i, choice, pos, value, found;
    int n = 5; // Current number of elements in the array
    int max_size = 10; // Maximum capacity of the array
    int a[10] = {10, 20, 30, 40, 50}; // Array pre-loaded with 5 items
    cout << "--- Array Operations Menu ---\n";
    cout << "1. Display Array Elements\n";
    cout << "2. Insert Element at Position\n";
    cout << "3. Delete Element from Position\n";
    cout << "4. Search Element by Value\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    // Operation 1: Display array elements
    if(choice == 1){
        cout << "\nArray elements: ";
        for(i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\nCurrent total count: " << n << "\n";
    }
    // Operation 2: Insert element at position
    else if(choice == 2){
        if(n >= max_size){
            cout << "\nError: Array is full! Cannot insert.\n";
        }
        else{
            cout << "\nEnter position to insert (1 to " << n + 1 << "): ";
            cin >> pos;
            
            // Convert standard user position (1-based) to array index (0-based)
            int index = pos - 1;

            if(index >= 0 && index <= n){
                cout << "Enter value to insert: ";
                cin >> value;

                // Shift older elements to the right to make an open slot
                for(i = n - 1; i >= index; i--){
                    a[i + 1] = a[i];
                }
                
                a[index] = value; // Put the new value into the open slot
                n++; // Increment the total tracking count
                
                cout << "Element inserted successfully!\nNew array: ";
                for(i = 0; i < n; i++) cout << a[i] << " ";
                cout << "\n";
            }
            else{
                cout << "Invalid position target!\n";
            }
        }
    }
    // Operation 3: Delete element from position
    else if(choice == 3){
        if(n <= 0){
            cout << "\nError: Array is empty! Nothing to delete.\n";
        }
        else{
            cout << "\nEnter position to delete (1 to " << n << "): ";
            cin >> pos;
            
            // Convert standard user position to array index
            int index = pos - 1;

            if(index >= 0 && index < n){
                // Shift elements to the left to overwrite the target item
                for(i = index; i < n - 1; i++){
                    a[i] = a[i + 1];
                }
                
                n--; // Decrement the total tracking count
                
                cout << "Element deleted successfully!\nNew array: ";
                for(i = 0; i < n; i++) cout << a[i] << " ";
                cout << "\n";
            }
            else{
                cout << "Invalid position target!\n";
            }
        }
    }
    // Operation 4: Search element by value
    else if(choice == 4){
        cout << "\nEnter value to search: ";
        cin >> value;
        
        found = 0;
        for(i = 0; i < n; i++){
            if(a[i] == value){
                cout << "Value " << value << " found at position: " << i + 1 << "\n";
                found = 1;
                break; // Stop looking after finding the first match
            }
        }
        if(found == 0){
            cout << "Value not found inside the array.\n";
        }
    }
    else{
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
