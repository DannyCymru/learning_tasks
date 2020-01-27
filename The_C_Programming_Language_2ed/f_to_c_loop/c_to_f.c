#include <stdio.h>
main() {
	
	double celsius = 0;
	
	//Task 1.4
	//Copied the previous code I created and made some adjustments that I noticed in their example.
	for (double fahrenheit  = 0; fahrenheit <= 100; fahrenheit +=5){
		celsius = (5.0/ 9.0) * (fahrenheit-32.0);
		printf("Degrees C:%f  Degrees F:%f\n", celsius, fahrenheit);
	}


}
