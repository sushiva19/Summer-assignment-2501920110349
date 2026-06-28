//Write a program to Create library management system.
#include <iostream>
using namespace std;

// Structure to group book information together
struct Book {
    int id;
    string title;
    string author;
    int is_issued; 
};

int main(){
    int i, choice, search_id;
    int total_books = 3; // Fixed catalog size to keep it simple
    Book b[total_books];
    b[0] = {101, "The C++ Programming Language", "Bjarne Stroustrup", 0};
    b[1] = {102, "Introduction to Algorithms", "Thomas Cormen", 0};
    b[2] = {103, "Clean Code", "Robert Martin", 1}; // This one starts as issued
    cout << "--- Welcome to the Library Management System ---\n";
    cout << "1. Display All Books\n";
    cout << "2. Issue a Book (Check Out)\n";
    cout << "3. Return a Book (Check In)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Operation 1: Display all records
    if(choice == 1){
        cout << "\nID\tTitle\t\t\t\tAuthor\t\t\tStatus\n";
        cout << "-------------------------------------------------------------------------\n";
        for(i = 0; i < total_books; i++){
            cout << b[i].id << "\t" << b[i].title;
            
            // Adjust tabs depending on title size for alignment
            if(b[i].title.length() < 16) cout << "\t\t\t";
            else cout << "\t";
            
            cout << b[i].author << "\t\t";
            
            if(b[i].is_issued == 1) cout << "Issued\n";
            else cout << "Available\n";
        }
    }
    // Operation 2: Issue a book
    else if(choice == 2){
        cout << "\nEnter Book ID to issue: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_books; i++){
            if(b[i].id == search_id){
                found = 1;
                if(b[i].is_issued == 0){
                    b[i].is_issued = 1; // Change status to issued
                    cout << "Success! '" << b[i].title << "' has been issued to you.\n";
                }
                else {
                    cout << "Sorry, this book is already issued to someone else.\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Book ID not found in library database.\n";
    }
    // Operation 3: Return a book
    else if(choice == 3){
        cout << "\nEnter Book ID to return: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_books; i++){
            if(b[i].id == search_id){
                found = 1;
                if(b[i].is_issued == 1){
                    b[i].is_issued = 0; // Change status back to available
                    cout << "Success! '" << b[i].title << "' has been returned to the shelves.\n";
                }
                else {
                    cout << "This book was never issued. It is already in the library.\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Book ID not found in library database.\n";
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
