#include <iostream>
using namespace std;

int max_value {100};

int min_value {1};

//Variable to store user input
string yes_or_no {"yes"};

//Puts all user input into lowercase
int to_lower (string x);

int main() {

	cout << "Please think of a number between 1 and 100, please answer each question with either 'yes' or 'no',if the program guesses your number correctly please answer 'correct'.\n";

	//Variables to test against
	int a {min_value};
	int b {max_value};

	//Variable used for the computer to make a guess
	int guess {50};

	//While loop to ask the user every question that is needed
	while(yes_or_no == "yes" || yes_or_no == "no") {

		cout << "Is your number greater than or equal to " << guess << "? \n";

		cin >> yes_or_no;

    	if(yes_or_no == "no") {
    		b = guess;
    	}

    	else if(yes_or_no == "yes") {
    		a = guess;
    	}

    	//Calculation to determine what number the next guess should be
    	guess = (a+b)/2;

	}

}


