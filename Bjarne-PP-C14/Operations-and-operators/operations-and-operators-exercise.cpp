#include <iostream>
#include <cmath> //needed to include this for sqrt
using namespace std;

int main () {

    int l = -1;
	cin >> l;
	double n = l;	//this variable needed to be below cin so that it would take the user input and not just default to the initialised value.
	cout << "l == " << l
	     << "\nl+1 == " << n+l
	     << "\nthee times l == " << 3*l
	     << "\ntwice l == " << l+l
	     << "\nl squared == " << l*l
	     << "\nhalf of l == " << l/2
	     << "\nsquare root of l == " << sqrt(n)
	     << '\n';

	     cin.get();
	     cin.ignore();
}
