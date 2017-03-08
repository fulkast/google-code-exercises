// secs_to_hrs_mins_secs.cpp, Lanke Fu
// Description: This program converts input seconds to output hours, minutes
// and seconds

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  cout << "Number of seconds: ";
  int seconds;
  cin >> seconds;

  // perform int divide. Rounds down to the highest full hour
  int hours = seconds / 3600;
  // store remaining seconds after operation
  int remainder = seconds % 3600;
  int minutes = remainder / 60;
  seconds = remainder % 60;

  cout << "Hours:  "  << hours << endl;
  cout << "Minutes: " << minutes << endl;
  cout << "Seconds:  "  << seconds << endl;

  return 0;
}
