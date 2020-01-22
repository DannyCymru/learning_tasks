#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {

        double value_one, value_two, nearly_equal;

        while(cin >> value_one >> value_two) {

            cout << value_one << endl << value_two << endl ;

            if (value_one > value_two) {

            cout << "The smaller value is: " << value_two << endl << "The larger value is: " << value_one << endl;

            nearly_equal = value_two - value_one;
            }

            else if (value_one == value_two) {

            cout << "The numbers are equal" << endl;

            nearly_equal = 0.0;
            }

            else{

            cout << "The smaller value is: " << value_one << endl << "The larger value is: " << value_two << endl;

            nearly_equal = value_one - value_two;
            }

            if (nearly_equal != 0.0 && nearly_equal <! 0 && nearly_equal < 0.000001){

            cout << "The numbers are nearly equal" << endl;

            cout << nearly_equal;
            }


    }

}
