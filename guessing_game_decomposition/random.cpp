// random.cpp: Lanke Fu
// Description: Illustrates how to generate ranomd numbers in C++

#include <iostream>
// for certain implementations of c++ the following line is needed for
// srand
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  int random_number;

  // Initialize random seed using the current time
  srand (time(NULL) );

  // Generate the random number between 1 and 100
  random_number = rand() % 100 + 1;

  int users_guess;
  // Let the user guess the number through input cin
  do {
    // prompt for a guess
    cout << "give it a go. tell me a number: ";
    // check for input validity
    if (!(cin >> users_guess)) {
      cout << "please enter a number" << endl;
      cin.clear();
      cin.ignore(10000,'\n');
      continue;
    }

    if (users_guess <= 0 || users_guess > 100) {
      cout << "your guess was out of the bounds [1,100]" << endl;
      continue;
    }

    if (users_guess < random_number) {
      cout << "Your guess was too low" << endl;
    } else if (users_guess > random_number) {
      cout << "Your guess was too high" << endl;
    } else {
      cout << "Your it right! ";
    }


  }while (users_guess != random_number);


  cout << "The random number is: " << random_number << endl;
}
