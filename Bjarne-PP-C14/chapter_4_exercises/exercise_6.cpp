#include <iostream>
#include <vector>
using namespace std;

//Vector containing all accepted numbers as strings in written form
vector<string> string_digits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//Vector containing all accepted numbers as strings written as numbers
vector<string> numbers {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

string convert {"do"};

int main() {

    cout << "What number would you like to convert over? \n";

    //While loop to allow the user to do numerous conversions without restarting the program.
    while(cin >> convert){

        //For loop that runs through the numbers 1-10, this number is then fed to the if else statements to show the number
        for (int i = 0; i < 10; ++i){

            //if the user input matches the string in the vector "string_digits", it outputs the string in the same position from the other vector.
            if (convert == string_digits[i]) {

                cout << numbers[i] << "\n";

            }

             else if(convert == numbers[i]) {

                cout << string_digits[i] << "\n";

            }
		}
	}
}

