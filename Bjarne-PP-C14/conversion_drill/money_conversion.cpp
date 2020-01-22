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

	string currency {"Hyrulian rupee"};

	double amount {9000.1};

	cout << "Please enter the currency you would like to convert to dollars (pound, euro or yen): ";

	cin >> currency;

 	cout << "\nNow please insert the amount you would like to convert: ";

 	cin >> amount;

	if (currency == "Yen" || currency == "yen" || currency == "YEN" || currency == "y" || currency == "Y" ) {

		amount *= yen_to_dollar;

		cout << amount;

	}

	else if (currency == "Pound" || currency == "pound" || currency == "POUND" || currency == "P" || currency == "p" ) {

		amount *= pound_to_dollar;

		cout << amount;

	}

	else if (currency == "Euro" || currency == "euro" || currency == "EURO" || currency == "E" || currency == "e") {

		amount *= euro_to_dollar;

		cout << amount;

	}

	else {

		cout << "I am sorry but the currency you entered, " << currency <<", is not recognised by this software";

	}


}
