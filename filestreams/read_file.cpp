// read_file.cpp: Lanke Fu
// Description: Reads a file written by the "file" program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string filename;
  cout << "input name of file to open: ";
  cin >> filename;

  ifstream file(filename.c_str());
  if(!file.is_open()) {
    cout << "Couldn't open " << filename << endl;
    return 0;
  }
  string first_name, last_name, age;
  file >> first_name >> last_name >> age;
  file.close();

  cout << first_name << " " << last_name << " " << age << endl;
  return 0;
}
