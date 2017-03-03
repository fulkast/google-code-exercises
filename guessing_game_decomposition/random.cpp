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
 
  cout << "Your random number is: " << random_number << endl;
}
