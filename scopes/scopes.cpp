// scope.cpp, Lanke Fu
// Description: A program to illustrate different scopes

#include <iostream>
using namespace std;

// These two variables are global and are accessible froma any function
// unless a local variable overrides.
int a = 18;
int b = 6;

// Takes copy of two variables and returns their difference. This does not
// change the original variables.
int function1(int a, int b) {
  return a - b;
}

// Returns the sum of "a" and "b" initialized in the global space.
// Note that their values may be reassigned later.
int function2() {
  int c;
  c = a + b;
  return c;
}

int main() {
  // In this scope, b takes on the value 12
  int b = 12;
  // Initialize a new variable c to 0
  int c = 0;
  // update the global variable a to the difference of b{12} and a{18}.
  // a = -6
  a = function1(b, a);
  // with the value of a updated, this function assigns the sum of a{-6} and
  // the global b{6} to c. c is 0. The local b is ignored, as it is not
  // referenced by the function2. The global b is taken.
  c = function2();
  cout << "a: " << a << " b: " << b << " c: " << c << endl;
}
