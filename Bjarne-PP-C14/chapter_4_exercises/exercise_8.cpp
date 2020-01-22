#include <iostream>
#include <vector>
using namespace std;

const int divider {2};

int amount_of_rice{0};

int current_square {0};

vector<int> previous_rice {};


int main(){

	cout << "How much rice would you like? " << endl;

	cin >> amount_of_rice;

	while (amount_of_rice >= 1) {

		current_square++;

		cout << "The amount of rice on the current square is: " << amount_of_rice << ". Current number of iterations is: " << current_square << endl;

		amount_of_rice /= divider;

		previous_rice.push_back(amount_of_rice);

	}

}
