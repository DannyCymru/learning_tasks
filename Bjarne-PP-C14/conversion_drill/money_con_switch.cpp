#include <iostream>
#include <string>
using namespace std;

int main(){

	/* Constant expressions for all of the currency conversions, as although the currency is subject to change
	I currently have no function to look up and change the value and it seems  pointless to
	leave it up to the user to check the exchange rate for a conversion program*/

	constexpr double yen_to_dollar {0.0087};

	constexpr double pound_to_dollar {1.26};

	constexpr double euro_to_dollar {1.07};

	constexpr double yuan_to_dollar {0.15};

	constexpr double kroner_to_dollar {0.14};

	char currency {'z'};

	double amount {9000.1};

	cout << "Please enter the currency you would like to convert to dollars (j for Japanese yen, e for euro, p for pound, y for Yuan or k for kroner): ";

	cin >> currency;

 	cout << "\nNow please insert the amount you would like to convert: ";

 	cin >> amount;

	switch(currency) {

	case 'j':	amount *= yen_to_dollar;
				cout << amount << " dollars";
				break;

	case 'p':	amount *= pound_to_dollar;
				cout << amount << " dollars";
				break;


	case 'e':	amount *= euro_to_dollar;
				cout << amount << " dollars";
				break;

	case 'y':	amount *= yuan_to_dollar;
				cout << amount << " dollars";
				break;

	case 'k':	amount*= kroner_to_dollar;
				cout << amount << " dollars";
				break;

	default:	cout << "I am sorry but the character that you entered, " << currency <<", does not correspond to a currency this software recognises.";
				break;
	}


}
