#include <iostream>
using namespace std;

int main () {

	double age;
	string name;

	  cout << "What is your name and age? ";

	  cin >> name >> age;

	  cout << "Hi " << name << ",\n Your age in months is " <<age * 12;

	  cin.get();
	  cin.ignore();
}
