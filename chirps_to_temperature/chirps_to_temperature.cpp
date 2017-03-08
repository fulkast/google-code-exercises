//chirps_to_temperature.cpp, Lanke Fu
// Description: This program takes as input, the number of times a bird
// chirps and outputs the temperature using the chirpsToTemperature method

#include <iostream>
#include <iomanip>
using namespace std;

// This function takes in an integer number of chirps a bird makes
// adds 40 and the divides the result by 4 to give the temperature output in
// float
float chirpsToTemperature(int nChirps) {
  return ( float(nChirps) + 40.0 ) / 4.;
}

int main(int argc, char const *argv[]) {

  //
  // prompt for number of chirps
  cout << "Number of chirps: ";
  int nChirps;
  // NB No fail check on input
  cin >> nChirps;
  cout << "The temperature is: ";
  double result = chirpsToTemperature(nChirps);
  cout << setprecision(5) << result << " degrees";
  cout << endl;
  return 0;
}
