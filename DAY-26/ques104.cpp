//Write a program to Create quiz application.
#include <iostream>
using namespace std;
int main(){
    int i, score = 0;
    char ans;
    cout << "--- Welcome to the Quiz Application! ---\n";
    cout << "Answer by entering option letter (A, B, C, or D)\n\n";
    // Question 1
    cout << "Q1. What is the capital of France?\n";
    cout << "A. Berlin\nB. Madrid\nC. Paris\nD. Rome\n";
    cout << "Your answer: ";
    cin >> ans;
    if(ans == 'C' || ans == 'c'){
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C.\n\n";
    }
    // Question 2
    cout << "Q2. Which planet is known as the Red Planet?\n";
    cout << "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n";
    cout << "Your answer: ";
    cin >> ans;
    if(ans == 'B' || ans == 'b'){
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B.\n\n";
    }
    // Question 3
    cout << "Q3. What is the largest ocean on Earth?\n";
    cout << "A. Atlantic\nB. Indian\nC. Arctic\nD. Pacific\n";
    cout << "Your answer: ";
    cin >> ans;
    if(ans == 'D' || ans == 'd'){
        cout << "Correct!\n\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is D.\n\n";
    }
    // Final Results display
    cout << "--- Quiz Finished! ---\n";
    cout << "Your total score: " << score << " out of 3\n";
    return 0;
}
