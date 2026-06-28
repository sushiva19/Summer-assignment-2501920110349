//Write a program to Create mini library system.
#include <iostream>
using namespace std;
int main(){
    int i, choice, search_id;
    int total_books = 3;
    //arrays to store information separately
    int book_ids[total_books];
    string titles[total_books];
    string authors[total_books];
    int is_issued[total_books]; // 1 means checked out, 0 means available
    book_ids[0] = 101; titles[0] = "C++ Basics";     authors[0] = "Bjarne S.";  is_issued[0] = 0;
    book_ids[1] = 102; titles[1] = "Data Structures"; authors[1] = "Thomas C.";  is_issued[1] = 0;
    book_ids[2] = 103; titles[2] = "Clean Code";     authors[2] = "Robert M.";  is_issued[2] = 1; // Starts issued

    cout << "--- Welcome to the Mini Library System ---\n";
    cout << "1. Display All Books\n";
    cout << "2. Issue a Book (Check Out)\n";
    cout << "3. Return a Book (Check In)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Operation 1: Display all records
    if(choice == 1){
        cout << "\nID\tTitle\t\t\tAuthor\t\tStatus\n";
        cout << "---------------------------------------------------------\n";
        for(i = 0; i < total_books; i++){
            cout << book_ids[i] << "\t" << titles[i];
            
            // Adjust tabs depending on title length for clean columns
            if(titles[i].length() < 8) cout << "\t\t\t";
            else if(titles[i].length() < 16) cout << "\t\t";
            else cout << "\t";
            
            cout << authors[i] << "\t\t";
            
            if(is_issued[i] == 1) cout << "Issued\n";
            else cout << "Available\n";
        }
    }
    // Operation 2: Issue a book
    else if(choice == 2){
        cout << "\nEnter Book ID to issue: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_books; i++){
            if(book_ids[i] == search_id){
                found = 1;
                if(is_issued[i] == 0){
                    is_issued[i] = 1; // Toggle state in parallel array track
                    cout << "Success! '" << titles[i] << "' has been issued to you.\n";
                }
                else {
                    cout << "Sorry, this book is already issued to someone else.\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Book ID not found in library database.\n";
    }
    // Operation 3: Return a book
    else if(choice == 3){
        cout << "\nEnter Book ID to return: ";
        cin >> search_id;
        
        int found = 0;
        for(i = 0; i < total_books; i++){
            if(book_ids[i] == search_id){
                found = 1;
                if(is_issued[i] == 1){
                    is_issued[i] = 0; // Reset state back to available
                    cout << "Success! '" << titles[i] << "' has been returned.\n";
                }
                else {
                    cout << "This book was never issued. It is already on the shelf.\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Book ID not found in library database.\n";
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
