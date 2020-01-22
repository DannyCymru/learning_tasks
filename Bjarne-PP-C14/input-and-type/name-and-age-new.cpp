#include <iostream>
#include <stdlib.h>
using namespace std;

//A function to run if an inputted answer is correct or recognizable
int age_yes ( string age_check = "Yes") {

    cout << "Fantastic, do you want your age to be displayed in years or months?\n";
}

//A function to run if an unrecognized answer is inputted
int failure(int F) {

	cout << "Huh, I dont recognise your answer.";

	exit(0);
}


int main () {

	double age = -1;

	string first_name = "John";

	string last_name = "Cena";

	  cout << "Hi there, what is your name? Please include your first and last name: ";

	  cin >> first_name >> last_name;

	  cout << "\nHi " << first_name << " " << last_name << "\nThis program is to designed to display the name and age that the user inputs in their prefered way out of the options given\n\nNow please input your age: ";

	  cin >> age;

	  string age_check = "Nah";

	  cout << "Is your age " << age <<"? (yes or no) ";

	  cin >> age_check;

	      //checks if you have inputtd the name correctly
	      //if you answer "yes" it runs the age yes function at the top of the page
          if (age_check == "Yes" || age_check == "yes") {
              age_yes ();

         }

          //if you answer "no" then it asks you to input it again and then runs the "yes" function
          else if( age_check == "no" || age_check == "No") {

        	  cout << "Oh, well then please type it in now: ";

        	  cin >> age;

        	  age_yes ();
          }

          //if you dont answer something recognizable the program runs the failure function
          else {

        	  failure (true);

          }

     string years_or_months = "eons";

     cin >> years_or_months;
        
        //if statement to decide how to display your age. This option is just for the standardf years
	      if (years_or_months == "Years" || years_or_months == "years") {

             cout << age;

	      }

	     //This option displays your age in months.
	      else if( years_or_months == "months" || years_or_months == "Months") {

	     	  cout << age * 12;

	      }

	      else {

	     	 failure(true);
	      }

	  cin.get();
	  cin.ignore();
}
