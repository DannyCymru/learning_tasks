#include <iostream>
#include <string>
#include "../std_lib_facilities.h"
using namespace std;

int main () {

	string first_name {"John Cena"};

	int age {45};

	cout << "Enter the first name and the age of the person you want to write to: ";

	cin >> first_name >> age;

	string friend_name {"Nate Diaz"};

	char friend_sex {'k'};

	cout << "\nAlso please insert the first name and sex of a friend (The sex should simply be one character eg, f/m): ";

	cin >> friend_name >> friend_sex;

	cout << "Dear, " << first_name << "\nHow are you? I am fine. I miss you.";

		if (friend_sex == 'f' || friend_sex == 'F') {

			cout << "\nIf you see " << friend_name << " ask her to call me";

		}

		else if (friend_sex == 'm' || friend_sex == 'M') {

			cout << "\nIf you see " << friend_name << " ask him to call me";

		}

		else {

			simple_error("That answer is not recognised");

		}

	cout << "\nI hear you just had a birthday and you are " << age <<" years old";

		if (age <= 12) {

			cout << "\nNext year you will be " << age+1 <<".";

		}

		else if (age > 12 && age <= 17 ) {

			cout << "\nNext year you will be able to vote.";

		}

        else if (age >= 17 && age < 60 ) {

            cout << "\nHow is work going?";

        }

		else if (age <= 70 ) {

			cout << "\nI hope you are enjoying your retirement.";

		}

		else {

			simple_error("\nYou're kidding!");

		}

	cout << " Yours Sincerely \n\nDaniel Roberts";




}
