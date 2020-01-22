#include <iostream>
using namespace std;

double value_1 {0.7734};

char metic_operator {'a'};

double value_2 {5318008};

//Function declaration to create the sum
int sum(double a, double b);

//Function declaration to do division
int divide(double a, double b);

//Function declaration to do multiplication
int multiply(double a, double b);

//Function declaration to do subtraction
int sub(double a, double b);


int main() {

	cout << "This program can do four basic arithmetic operations, Addition, Subtraction, Multiplaction and Division. Please input the values and the operator you want this basic calculator to work out. eg 1 + 1 \n" << "Use '|' to exit \n";

    //While loop to allow the user to do multiple calculations
	while(cin >> value_1 >> metic_operator >> value_2) {

    //Switch to determine what function to use depending on the operator used
	switch(metic_operator) {

		case '+':
			sum(value_1, value_2);
			break;

		case '/':
			divide(value_1, value_2);
			break;

		case '-':
			sub(value_1, value_2);
			break;

		case '*':
			multiply(value_1, value_2);
			break;

        }
	}

}

//Function definiton to create the sum
int sum(double a, double b){

	cout << '=' << value_1 + value_2 << "\n";


}

//Function definition to do division
int divide(double a, double b){

	cout << '=' << value_1 / value_2 << "\n";

}

//Function definition to do multiplication
int multiply(double a, double b){

	cout << '=' << value_1 * value_2 << "\n";

}

//Function definition to do subtraction
int sub(double a, double b){

	cout << "=" << value_1 - value_2 << "\n";

}
