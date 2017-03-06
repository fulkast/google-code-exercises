// salary_choice.cpp: Lanke Fu
// Description: this program reads in the amount of weekly sales and decides
// the optimal salary choice

#include <iostream>
using namespace std;

// constants regarding sales
#define kPricePerUnit 225 // average price of a pair of shoes
#define kWeeklyWage 600   // used by method 1
#define kSalary 7.0       // hourly wage for method 2
#define kHoursPerWeek 40  // number of hours worked per week
#define kCommission2 0.1  // commission in method 2
#define kCommission3 0.2  // commission in method 3
#define kBonusPerUnit 20  // bonus in method 3

// A function to get user integer units of sales per week
int GetInput() {
  int units;
  cout << "Enter number of units sold per week: ";
  if (! (cin >> units)) {
    cout << "Please enter an integer unit." << endl;
    return 0;
  } else {
    return units;
  }
}

// The first method whose return is constant of $600 per week
void CalcMethod1() {
  cout << "Method 1: " << kWeeklyWage << endl;
}

// Method 2: A fixed salary of $7.0 per hour and 10% commission on sales
void CalcMethod2(int Sales) {
  double PerHour, TotalPay, Commission;

  PerHour = kSalary * kHoursPerWeek;
  Commission = kCommission2 * Sales * kPricePerUnit;
  TotalPay = PerHour + Commission;
  cout << "Method 2: " << TotalPay << endl;
}

// Method 3: No salary but given a commission and $20 per pair of shoe sold
void CalcMethod3(int Sales) {
  int Extra;
  double TotalPay, Commission;

  Extra = kBonusPerUnit * Sales;
  Commission = Sales * kPricePerUnit * kCommission3;
  TotalPay = Extra + Commission;
  cout << "Method 3: " << TotalPay << endl;
}

int main(int argc, char const *argv[]) {
  // prompt for the amount of weekly sales
  int WeeklySales = GetInput();
  if (WeeklySales == 0) return 0;

  CalcMethod1();
  CalcMethod2(WeeklySales);
  CalcMethod3(WeeklySales);

  return 0;
}
