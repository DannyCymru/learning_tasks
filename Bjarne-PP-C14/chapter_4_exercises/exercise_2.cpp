#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double> temps; //Vector to store temperatures

double mean(); //function declaration to compute mean

double median(); //function declaration to compute median

int main() {

	for(double temp; cin>>temp;) /*read numbers into temp*/ {

		temps.push_back(temp); //puts the contents of temp into vector
	}

    mean();
    median();

	cin.get();
	cin.ignore();
}

//Function definitions

double mean() {

	double sum = 0;

	for (int i:temps)

    sum += i;
    cout << "Average temperature: " << sum/temps.size() << '\n';


}

double median() {

    double median_sum {0};
    sort(temps.begin(), temps.end()); //sorts the temperatures

    if (temps.size() % 2 == 1) {

        median_sum = temps[(temps.size()-1)/2];

    }

    else {

        median_sum = (temps[temps.size()/2] + temps[temps.size()/2 - 1]) / 2;
    }

    cout << "Median temperature: " << median_sum << endl;
}
