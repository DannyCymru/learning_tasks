#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

vector<string> r_p_s {"ROCK", "PAPER", "SCISSORS"};

string user_input {"nothing"}, comp_result {"test"};

int user_wins {0}, comp_wins {0}, draw {0};

void comp_input();

int main() {

    cout << "Rock, Paper or Scissors? Q to exit the game ";

    while(user_input != "Q") {

        cin >> user_input;

        transform(user_input.begin(), user_input.end(), user_input.begin(), (int (*)(int))toupper);

    	comp_input();

        if(user_input == "Q") {

            cout << "You have lost: " << comp_wins << " games\n" << "You have drawn: " << draw << " games\n" << "You have won: " << user_wins << " games\n";

            return(0);
        }

        else{
             cout << comp_result<< endl;
        }

        if (user_input == comp_result) {

           	cout << "Draw!\n";
            draw++;
        }

        else if (user_input == "ROCK" && comp_result == "SCISSORS" || user_input == "PAPER" && comp_result == "ROCK" || user_input == "SCISSORS" && comp_result == "PAPER") {

            cout << "User Wins!\n";
            user_wins++;
        }

        else if (comp_result == "ROCK" && user_input == "SCISSORS" || comp_result == "PAPER" && user_input == "ROCK" || comp_result == "SCISSORS" && user_input == "PAPER"){

            cout << "Computer Wins!\n";
            comp_wins++;
        }

        else{

            cout << "Your input is not recognised. Next round! ";
        }
    }

    cin.get();
    cin.ignore();
}

void comp_input(){

	srand(time(NULL));

	int randomisation {rand()%3};

    for(string x: r_p_s) {

		x = r_p_s[randomisation];
        comp_result = x;
    }
}
