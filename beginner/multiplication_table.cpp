// multiplication_table.cpp: Lanke Fu
// Description: This programm prints out the multiplcation table

#include <iostream>
using namespace std;

int main() {
  // print column lables
  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    // loop over the columns
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      // loop over the rows
      cout << i * c << '\t';
    }
    cout << endl;
  }
  return 0;
}
