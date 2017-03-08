// final_grade_calc.cpp, Lanke Fu
// Description: This program calculates the final grade of a student based on
// the assignments grade, midterm grade, final exam grade and class participation
// grade. The proportions are as shown

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This function receives a string prompt to cout to the user and returns the
// users integer input
int prompIntInput(string prompt) {
  int result;
  cout << prompt << " ";
  cin >> result;
  return result;
}

// This function takes in an assessment name and concatenates the string
// "Enter the score for the " in front of the assessment name
string generateAssessmentScorePrompt(string assessment) {
  return "Enter the score for the " + assessment + ".";
}

int main(int argc, char const *argv[]) {
  // Setup assignment names and their weights
  vector<string> assessments { "first assignment",
                                "second assignment",
                                "third assignment",
                                "fourth assignment",
                                "midterm",
                                "final",
                                "section grade"};
  vector<double> weights {0.1, 0.1, 0.1, 0.1, 0.15, 0.35, 0.1};

  if (weights.size() != assessments.size()) {
    cout << "DevError: There are more assignments than there are weights" << endl;
  }

  // prompt for individual scores and perform weighted sum
  double final_grade = 0;
  for (int i = 0; i < assessments.size(); i++) {
    int score = prompIntInput(generateAssessmentScorePrompt(assessments[i]));
    final_grade += double(score) * weights[i];
  }

  cout << "The final grade is: " << final_grade << endl;
  return 0;
}
