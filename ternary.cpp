#include <iostream>
using namespace std;
int main() {
  bool isAdult;
  int age;
  cout << "Enter your age: ";
  cin >> age;
  isAdult = (age >= 18) ? true : false;
  if (isAdult) {
    cout << "You are an adult." << endl;
  } else {
    cout << "You are not an adult." << endl;
  }
  return 0; 
}