#include <iostream>
#include <vector>
using namespace std;

//Vector to store the distances
vector<double> distance_v;

//Global variable to temporaily hold the values before they get entered into the vector
double temp {0};

//Functions to work out the total and the mean of the distances
double total();

double mean(double x);

int main(){

	//Variables to check the distances against, having the variables initilised to these values allows for nearly any reasonable number checked against it to be smaller or bigger, allowing for easy comparison.
	double biggest = {0};

	double smallest = {10000000};

	cout << "Please insert the distances to as many cities as you would like. Use any character outside of a number to see the results!" << "\n";

	//For loop to allow for the user to enter as many numbers as they want and to inserrt each number into the created vector
	for(double temp; cin>> temp;) {

		distance_v.push_back(temp);

	}

	total();

	//For loop to compare every value within the vector to the biggest and smallest distances to determine the smallest and biggest vaulues within the vector.
	for (int i = 0; i < distance_v.size(); ++i) {

			if (distance_v[i] >= biggest){

				biggest = distance_v[i];

			}

			else if (distance_v[i] <= smallest) {

				smallest = distance_v[i];

			}
	}

	cout << "The biggest distance between a neighbouring city is: " << biggest << endl;

	cout << "The smallest distance between a neighbouring city is: " << smallest << endl;
}

double total() {

	//For loop to go through every value in the vector and add it together into the temp variable
	for (double i: distance_v) {

		temp += i;

	}

	//Passes the total value of the above calculation to the mean function to be used further
	mean(temp);

	cout << "The sum distance is " << temp << endl;
}


double mean(double x) {

    double average {0};

    //calculates the average
	average = temp / distance_v.size();

	cout << "The mean distance is " << average << endl;

}
