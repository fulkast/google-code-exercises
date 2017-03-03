// gcd.cpp: Lanke Fu
// Desctoption: An implementation of the non-recursive Euclidean algorithm for
// finding the greatest common divisor.
// gcd(a,0) = a
// gcd(a,b) = gcd(b, a % b) // % stands for modulo
// e.g. gcd(12,18) = 6

#include <iostream>
using namespace std;

// A non recursive verison of Euclid's algorithm
int gcd (int a, int b) {
  int temp;
  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return (a);
}

int main() {
  int x,y;
  cout << "enter two integers: ";
  if (!(cin >> x >> y)) {
    cout << "please enter only integers" << endl;
  } else {
    cout << "gcd(" << x << ", " << y << ") = " << gcd(x,y) << endl;
  }
  return 0;
}
