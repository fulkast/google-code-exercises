// read_file.cpp: Lanke Fu
// Description: Reads a file written by the "file" program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  char first_name[30], last_name[30]; int age;
  char file_name[20];
  char done;

  cout << endl << "Enter the name of the file to store output: ";
  cin >> file_name;
  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);

  while(1) {
    // Collect the data.
    cout << "Enter First Name: "; cin >> first_name;
    cout << "Enter Last Name: "; cin >> last_name;
    cout << "Enter Age: "; cin >> age;

    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl;
    cout << "Continue? y/n: ";
    cin >> done;
    if (done == 'n') {
      break;
    }
  }
  People.close();

  ifstream file(file_name);
  if(!file.is_open()) {
    cout << "Couldn't open " << file_name << endl;
    return 0;
  }

  while(1) {
    file >> first_name >> last_name >> age; // note that the eof check happens
                                            // after this line
    if (file.eof())
      break;

    cout << first_name << " " << last_name << " " << age << endl;
  }
  file.close();

  return 0;
}
