//Write a program to Develop complete mini project using arrays, strings and functions.
#include <iostream>
using namespace std;

// Global constant to define maximum system capacity
const int MAX_SIZE = 10;

// Function declarations (Prototypes)
void display_all(string names[], string phones[], int count);
void add_contact(string names[], string phones[], int &count);
void search_contact(string names[], string phones[], int count);
void edit_contact(string names[], string phones[], int count);

int main(){
    int choice;
    int current_count = 3; 
    string contact_names[MAX_SIZE] = {"shivank", "mohit raj", "devansh tiwari"};
    string contact_phones[MAX_SIZE] = {"9876543210", "8765432109", "7654321098"};

    // Loop system to keep project running until user explicitly exits
    while(true) {
        cout << "\n--- MINI CONTACT MANAGEMENT SYSTEM ---\n";
        cout << "1. Display All Contacts\n";
        cout << "2. Add New Contact\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Edit Contact Phone Number\n";
        cout << "5. Exit Project\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); // Clear newline buffer before string operations

        if(choice == 1) {
            display_all(contact_names, contact_phones, current_count);
        }
        else if(choice == 2) {
            add_contact(contact_names, contact_phones, current_count);
        }
        else if(choice == 3) {
            search_contact(contact_names, contact_phones, current_count);
        }
        else if(choice == 4) {
            edit_contact(contact_names, contact_phones, current_count);
        }
        else if(choice == 5) {
            cout << "\nThank you for using the system. Goodbye!\n";
            break; // Breaks the infinite loop to exit cleanly
        }
        else {
            cout << "\nInvalid selection! Please enter a number from 1 to 5.\n";
        }
    }
    return 0;
}

// Function to print out the complete data layout grid
void display_all(string names[], string phones[], int count) {
    if(count == 0) {
        cout << "\nDatabase is empty! No records to show.\n";
        return;
    }
    cout << "\nIndex\tContact Name\t\tPhone Number\n";
    cout << "---------------------------------------------\n";
    for(int i = 0; i < count; i++) {
        cout << i + 1 << "\t" << names[i];
        
        // Adjust column spacing dynamically based on string length
        if(names[i].length() < 8) cout << "\t\t\t";
        else if(names[i].length() < 16) cout << "\t\t";
        else cout << "\t";
        
        cout << phones[i] << "\n";
    }
}

// Function to append a new contact record row to the end of the arrays
void add_contact(string names[], string phones[], int &count) {
    if(count >= MAX_SIZE) {
        cout << "\nError: Memory limit reached! Cannot add more contacts.\n";
        return;
    }
    cout << "\nEnter Full Name: ";
    getline(cin, names[count]);
    cout << "Enter Phone Number: ";
    cin >> phones[count];
    
    count++; // Increments main tracking reference value up by 1
    cout << "Contact added successfully!\n";
}

// Function to search the database array for a target text block
void search_contact(string names[], string phones[], int count) {
    string search_name;
    cout << "\nEnter name to search: ";
    getline(cin, search_name);
    
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(names[i] == search_name) {
            found = 1;
            cout << "\n--- Record Found ---\n";
            cout << "Name : " << names[i] << "\n";
            cout << "Phone: " << phones[i] << "\n";
            break;
        }
    }
    if(found == 0) {
        cout << "\nError: No contact matching '" << search_name << "' found.\n";
    }
}

// Function to find a target match index row and overwrite its value
void edit_contact(string names[], string phones[], int count) {
    string search_name;
    cout << "\nEnter the name of the contact you want to edit: ";
    getline(cin, search_name);
    
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(names[i] == search_name) {
            found = 1;
            cout << "Current Phone Number: " << phones[i] << "\n";
            cout << "Enter New Phone Number: ";
            cin >> phones[i]; // Overwrites the data at index location 'i' directly
            cout << "Contact details updated successfully!\n";
            break;
        }
    }
    if(found == 0) {
        cout << "\nError: Contact matching '" << search_name << "' not found.\n";
    }
}
