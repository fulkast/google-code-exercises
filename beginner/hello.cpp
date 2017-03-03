// hello.cpp: Lanke Fu
// Description: a program that prints the immortal saying, "hellow world"

#include <iostream>
// the following include is needed for setw() in some c++ implementations
#include <iomanip>
using namespace std;

int main() {
  // set up cout for left-aligned, default would have been right
  cout << setiosflags(ios::left);
  // the first for loop will handle the rows
  for (int i = 0; i < 6; i++) {
    // the second for loop handles the columsn
    for (int j = 0; j < 4; j++)
      // setw(int) sets the column width
      cout << setw(17) << "Herrow world!";
    // the next line is a part of the first for loop
    // it handles the end of line to the next row
    cout << endl;
  }
  return 0;
}
