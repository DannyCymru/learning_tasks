#include <stdio.h>
main() {
	
	double fahrenheit = 0;
	double celsius = 0;
	
	//My quick implementation of a similar program shown in chapter 1.2
	//For loop that prints out a table of Fahrenheit values with the celsius conversion
	for (double i = 0; i <= 150; i+=5)
	{
		fahrenheit = i;
		celsius = (5.0/ 9.0) * (fahrenheit-32.0);
		printf("Degrees F:%f  Degrees C:%f\n",  fahrenheit, celsius);
	}


}
