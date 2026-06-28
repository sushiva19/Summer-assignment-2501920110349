//Write a program to Create ticket booking system.
#include <iostream>
using namespace std;

// Structure to group ticket tier details together
struct TicketTier {
    int tier_id;
    string name;
    int available_seats;
    double price;
};

int main(){
    int i, choice, seats_to_book;
    int total_tiers = 3; // Fixed category count to keep it simple
    TicketTier tier[total_tiers];
    tier[0] = {1, "VIP (Front Rows)", 10, 50.0};
    tier[1] = {2, "Premium (Middle)", 25, 30.0};
    tier[2] = {3, "Economy (Back Rows)", 40, 15.0};

    cout << "--- Welcome to the Ticket Booking System ---\n";
    cout << "1. View Seat Availability & Prices\n";
    cout << "2. Book Tickets\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    // Operation 1: View available seats and prices
    if(choice == 1){
        cout << "\nID\tSection Name\t\tAvailable Seats\tPrice per Ticket\n";
        cout << "-----------------------------------------------------------------\n";
        for(i = 0; i < total_tiers; i++){
            cout << tier[i].tier_id << "\t" << tier[i].name;
            
            // Adjust tabs depending on name size for clean alignment
            if(tier[i].name.length() < 16) cout << "\t\t";
            else cout << "\t";
            
            cout << tier[i].available_seats << "\t\t$" << tier[i].price << "\n";
        }
    }
    // Operation 2: Book Tickets
    else if(choice == 2){
        int target_id;
        cout << "\n1. VIP ($50.0)\n2. Premium ($30.0)\n3. Economy ($15.0)\n";
        cout << "Select Section ID (1-3): ";
        cin >> target_id;
        
        int found = 0;
        for(i = 0; i < total_tiers; i++){
            if(tier[i].tier_id == target_id){
                found = 1;
                cout << "Section selected: " << tier[i].name << "\n";
                cout << "Available seats: " << tier[i].available_seats << "\n";
                cout << "Enter number of tickets to book: ";
                cin >> seats_to_book;
                
                // Validate if there are enough seats available
                if(seats_to_book > 0 && seats_to_book <= tier[i].available_seats){
                    double total_cost = seats_to_book * tier[i].price;
                    tier[i].available_seats = tier[i].available_seats - seats_to_book; // Reduce seats
                    
                    cout << "\n--- Booking Successful! ---\n";
                    cout << "Tickets Booked: " << seats_to_book << "\n";
                    cout << "Total Amount Paid: $" << total_cost << "\n";
                    cout << "Remaining seats in this section: " << tier[i].available_seats << "\n";
                }
                else if(seats_to_book > tier[i].available_seats){
                    cout << "Booking Failed: Not enough seats available in this section!\n";
                }
                else {
                    cout << "Error: Invalid number of tickets requested!\n";
                }
                break;
            }
        }
        if(found == 0) cout << "Error: Invalid Section ID selected!\n";
    }
    else {
        cout << "\nInvalid choice selection!\n";
    }
    return 0;
}
