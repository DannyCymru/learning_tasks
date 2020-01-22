#include <iostream>
using namespace std;

int main() {

    int i {0};

    //This variable is to give me an easy variable to incrememnt through the loop so that the program can easily increment the character needed to be displayed
    int incre_num{0};

    char character {'a'};

    // while i is less than 26 it runs the code block
    while(i < 26) {

    //this char stores the character plus the number to incrememnt the character by, this is so that I have less to write in the "char()" and "int()" calls
    char incre_char = character + incre_num;

    //displays the character from the incre_char variable, displays a tab value then displays the integer that the character is associated with
	cout << char(incre_char) << "\t" << int(incre_char) << endl;

    ++incre_num;
	++i;
	}
}
