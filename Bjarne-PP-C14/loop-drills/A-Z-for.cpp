#include <iostream>
#include <cctype>
using namespace std;

int main() {

    //This variable is to give me an easy variable to incrememnt through the loop so that the program can easily increment the character needed to be displayed
    int incre_num{0};

    char character {'a'};

    //takes the value of character and places it into the toupper function, this increases the usability and resilience of the code if we decide to change it to accept user input
    char cap = toupper(character);

    for (int i = 0; i < 26; ++i){

    //this char stores the character plus the number to incrememnt the character by, this is so that I have less to right in the "char()" and "int()" calls
    char incre_char = character + incre_num;

    char incre_cap = cap + incre_num;

    /*displays the character from the incre_char variable, displays a tab value then displays the integer that the character is associated with
    the next part then does the same with the capatilised version of the character */
	cout << char(incre_char) << "\t" << int(incre_char) << endl << char(incre_cap) << "\t" << int(incre_cap) << endl << "-----------"<< endl;

    ++incre_num;
	}
}
