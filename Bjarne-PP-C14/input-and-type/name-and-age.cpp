#include <iostream>
#include <string> //if not using a header file you must include string for string variables
using namespace std;

int main() {

	cout << "Please Enter your first name and age:\n";

	string first_name = "???"; //Its best to set a variables value to this (or similar) because it will help you when debugging.
	int age = -1;

	cin >> first_name >> age; //This accepts the user input and writes the answers into the specified variables.

	cout << "Hello, " << first_name << " (age" << age << ")\n";

}
