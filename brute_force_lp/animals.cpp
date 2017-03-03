// animals.cpp: Lanke Fu
// Description: Computes combinations of animals under cosntraints

#include <iostream>
using namespace std;

int main() {
  const int kHorsePrice = 10;
  const int kRabbitPrice = 0.5;
  const int kPigPrice = 3;

  const int kNAnimals = 100;
  // search brutely
  for (int h = 0; h < kNAnimals; h++)
    for (int p = 0; p < kNAnimals; p++)
      for (int r = 0; r < kNAnimals; r++)
        if ((h+p+r) == 100)
          if((h * kHorsePrice + p * kPigPrice + r * kRabbitPrice) == 100)
            cout << "found a combination of: " << h << " horses, " << p
            << " pigs and " << r << " rabbits" << endl;

}
