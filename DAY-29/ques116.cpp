//Write a program to Create inventory management system.
#include <iostream>
using namespace std;

// Structure to group item information together
struct Item {
    int id;
    string name;
    int stock;
    double price;
};
int main(){
    int i, choice, search_id, quantity;
    int total_items = 3; // Fixed inventory catalog size to keep it simple
    Item inv[total_items];
    inv[0] = {101, "Laptop", 15, 899.99};
    inv[1] = {102, "Smartphone", 30, 499.50};
    inv[2] = {103, "Wireless Mouse", 50, 25.25};

    cout << "--- Welcome to the Store Inventory System ---\n";
    cout << "1. Display Inventory Stock List\n";
    cout << "2. Restock Items (Add Stock)\n";
    cout << "3. Sell Items (Reduce Stock)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Operation 1: Display all inventory records
    if(choice == 1){
        cout << "\nID\tItem Name\t\tIn Stock\tPrice\n";
        cout << "---------------------------------------------------------\n";
        for(i = 0; i < total_items; i++){
            cout << inv[i].id << "\t" << inv[i].name;
            
            // Adjust tabs depending on name size for clean column alignment
            if(inv[i].name.length() < 8) cout << "\t\t\t";
            else if(inv[i].name.length() < 16) cout << "\t\t";
            else cout << "\t";
            
            cout << inv[i].stock << "\t\t$" << inv[i].price << "\n";
        }
    }
    // Operation 2: Restock Items (Add Stock)
    else if(choice == 2){
        cout << "\nEnter Item ID to restock: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_items; i++){
            if(inv[i].id == search_id){
                found = 1;
                cout << "Item: " << inv[i].name << " (Current Stock: " << inv[i].stock << ")\n";
                cout << "Enter quantity to add: ";
                cin >> quantity;
                
                if(quantity > 0){
                    inv[i].stock = inv[i].stock + quantity; // Increase stock levels
                    cout << "Success! New stock count: " << inv[i].stock << "\n";
                }
                else {
                    cout << "Error: Invalid restock quantity!\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Item ID not found!\n";
    }
    // Operation 3: Sell Items (Reduce Stock)
    else if(choice == 3){
        cout << "\nEnter Item ID to sell: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_items; i++){
            if(inv[i].id == search_id){
                found = 1;
                cout << "Item: " << inv[i].name << " (Current Stock: " << inv[i].stock << ")\n";
                cout << "Enter quantity to sell: ";
                cin >> quantity;
                
                // Validate if quantity is positive and within available stock limits
                if(quantity > 0 && quantity <= inv[i].stock){
                    double total_bill = quantity * inv[i].price;
                    inv[i].stock = inv[i].stock - quantity; // Deduct stock levels
                    
                    cout << "Success! Items sold. Total Sale Bill: $" << total_bill << "\n";
                    cout << "Remaining stock count: " << inv[i].stock << "\n";
                }
                else if(quantity > inv[i].stock){
                    cout << "Transaction Failed: Insufficient stock available!\n";
                }
                else {
                    cout << "Error: Invalid sale quantity!\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Item ID not found!\n";
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
