#include <iostream>
using namespace std;

unsigned long int amount_of_rice {1};

int main() {

    unsigned long int temp = 0;

	for (int i = 1 ; i < 64; ++i) {

        temp += amount_of_rice;

        cout << temp << endl;

		amount_of_rice *= 2;

	}
}
