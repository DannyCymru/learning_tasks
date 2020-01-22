#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // Vector for all the disliked words
    vector<string>disliked_words = {"Broccoli", "Nina", "Hellsing", "Fifa", "CoD"};

    //Vector to feed everything that is inputted
    vector<string>inputted_words = {};

    //This for loop runs while the user continues to input words
    for(string inputted;cin >> inputted;) {

        if (find(disliked_words.begin(), disliked_words.end(), inputted) != disliked_words.end()){

            inputted_words.push_back("Bleep");

            }

        else {

        inputted_words.push_back(inputted);

        }
    }


    for (string v:inputted_words) {

        cout << v << "\n";

    }
}
