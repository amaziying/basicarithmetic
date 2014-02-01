// SYDE 121 Digital Computation
// Assignment Lab 04 Task 4
// This program is a math game for elementary school students.
//
// program by Ziying Zhang

#include <iostream>
using namespace std;

int main()
{
    int score;   //defining global variables
    int result;
    int solution;
    int correct_counter = 0; //initializing counter values to begin at zero
    int total_counter = 0;
    
    cout << "Welcome to lab0404 MATH GAME.\n" //introduction to the game.
         << "Enter 1 to begin.\n" //instructions of how to operate
         << "Enter -1 at any point in the game to exit.\n";
    
    cin >> result; 
    
    while (result != -1) //giant loop to repeat questions
    {
    total_counter++;
    
    int i1 = rand()%10; //random number generator for the two numbers used for multiplication
    int i2 = rand()%10;
    
    cout << "What is " //asking of the question
         << i1
         << " times "
         << i2
         << "?"
         << endl;
    
    cin >> result;
    solution = i1 * i2; 
    
    if (result == solution) //if correct the first time, the below block runs
    {
               cout << "Correct!\n\n";
               
               correct_counter++;
    }
    
    else if (result == -1) //if player wants to exit, the loop stops and displays the final score
    {
    cout << "Thanks for playing!\n"
         << "You have scored "
         << correct_counter
         << " out of a possible "
         << total_counter
         << endl;
    }
    
    else //for any other answer, the "incorrect" loop runs until the answer is correct
    {
               
               while (result != solution)
               {
               cout << "Incorrect. Please try again!\n\n";
               cin >> result;
               }
     
     cout << "Correct!\n\n";
     }
     
    // whole loop runs again
    
    
}
    
system ("pause");
return 0;
}
