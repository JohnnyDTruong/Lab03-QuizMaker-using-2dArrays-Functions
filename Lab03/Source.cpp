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


//this function adds in the Blank Question
//and the Blank Answer
int main()
{
	string B[5][2];
	int question1 = 0;
	cout << "Welcome to Quizmaker!" << endl;
	cout << "Make a quiz up to 5 questions long!" << endl;
	char choice;

	for (int rows = 0; rows < 5; rows++)
	{

		B[rows][0] = "Blank Question";
		B[rows][1] = "Blank Answer";
	}
	do
	{
		choice = menu();

	//only works if the user chooses a
	//allows user to choose b to quit function
		if (choice == 'a')
		{
			addQuestion(B, question1);
			cout << " Question" << question1 + 1 << " added!!!" << endl;
			question1 += 1;
		}

	//anything else will be invalid
	//and the function will end
		else
		{
			cout << "The input in INVALID!!" << endl;
		}

	//choice b allows the function to quit
	//the function will automatically quit after 5 questions
	} while (question1 < 5 && choice != 'b');
	displayQuiz(B, question1);

	return 0;
}

//this function allows the users to create a question
//this gives the users options to "create a question" or "quit"
	char menu()
{
	char choice;
	cout << "What would you like to do?" << endl;
	cout << " \'a\' create a question, \'b\' quit" << endl;
	cout << "Choice: " << endl;
	cin >> choice;
	cin.ignore();

	return choice;
}


//this function allows the user to add the question
//this also allows the user to add the answer
void addQuestion(string B[5][2], int question1)
{
	string questions;
	cout << "Please create a question: " << endl;
	getline(cin, questions);
	B[question1][0] = questions;
	cout << endl;
	string answers;
	cout << "Please add in the answer: " << endl;
	getline(cin, answers);
	B[question1][1] = answers;

}

//creates the display for the quiz
void displayQuiz(string B[5][2], int question1)
{
	cout << "Created the quiz!!" << endl;
	for (int bCols = 0; bCols < 5; bCols++)
	{
		cout << "Q" << bCols + 1 << ": " << B[bCols][0] << endl;
		cout << "A" << bCols + 1 << ": " << B[bCols][0] << endl;
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