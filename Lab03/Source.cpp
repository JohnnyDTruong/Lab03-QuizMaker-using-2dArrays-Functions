/*
Jonathan Truong
CPSC 121-19
02/12/20
Lab 03 - Arrays & Functions
*/

#include <iostream>
#include <string>
using namespace std;

char menu();
void addQuestion(string B[5][2], int question1);
void displayQuiz(string B[5][2], int question1);

int main()
{
    string B[5][2];
    int questionCount = 0;
    cout << "Welcome to Quizmaker!" << endl;
    cout << "Make a quiz up to 5 questions long!" << endl;
    char choice;

    // Initialize the quiz array with default values
    for (int rows = 0; rows < 5; rows++)
    {
        B[rows][0] = "Blank Question";
        B[rows][1] = "Blank Answer";
    }

    do
    {
        choice = menu();

        // Handle user choice
        if (choice == 'a')
        {
            if (questionCount < 5)
            {
                addQuestion(B, questionCount);
                cout << "Question " << questionCount + 1 << " added!!!" << endl;
                questionCount++;
            }
            else
            {
                cout << "Maximum number of questions reached!" << endl;
                break;
            }
        }
        else if (choice != 'b')
        {
            cout << "The input is INVALID!!" << endl;
        }

    } while (choice != 'b');

    displayQuiz(B, questionCount);

    return 0;
}

// Function to display the menu and get the user's choice
char menu()
{
    char choice;
    cout << "What would you like to do?" << endl;
    cout << " 'a' create a question, 'b' quit" << endl;
    cout << "Choice: ";
    cin >> choice;
    cin.ignore(); // Clear the newline character from the buffer
    return choice;
}

// Function to add a question and its answer to the quiz
void addQuestion(string B[5][2], int question1)
{
    string questions;
    cout << "Please create a question: ";
    getline(cin, questions);
    B[question1][0] = questions;

    string answers;
    cout << "Please add in the answer: ";
    getline(cin, answers);
    B[question1][1] = answers;
}

// Function to display the created quiz
void displayQuiz(string B[5][2], int questionCount)
{
    cout << "Created the quiz!!" << endl;
    for (int i = 0; i < questionCount; i++)
    {
        cout << "Q" << i + 1 << ": " << B[i][0] << endl;
        cout << "A" << i + 1 << ": " << B[i][1] << endl; // Corrected to display the answer
    }
}


/*
Welcome to Quizmaker!
Make a quiz up to 5 questions long!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
a
Please create a question:
Why?

Please add in the answer:
Because..
 Question1 added!!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
a
Please create a question:
When?

Please add in the answer:
Tomorrow..
 Question2 added!!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
Who?
The input in INVALID!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
The input in INVALID!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
a
Please create a question:
WHo?

Please add in the answer:
Me..
 Question3 added!!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
a
Please create a question:
Why is life full of stressful situations?

Please add in the answer:
Because that is life..
 Question4 added!!!
What would you like to do?
 'a' create a question, 'b' quit
Choice:
a
Please create a question:
Are you stressed?

Please add in the answer:
Yes. Mostly everyday..
 Question5 added!!!
Created the quiz!!
Q1: Why?
A1: Why?
Q2: When?
A2: When?
Q3: WHo?
A3: WHo?
Q4: Why is life full of stressful situations?
A4: Why is life full of stressful situations?
Q5: Are you stressed?
A5: Are you stressed?

C:\Users\CSUFTitan\source\repos\Lab03\Debug\Lab03.exe (process 15472) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/