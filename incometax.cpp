#include<iostream>
using namespace std;
int main() {
  int income;
  float tax;
  cout << "Enter your income (in Lakhs): ";
  cin >> income;

  if (income < 5) {
    cout << "No tax" << endl;
  } else if (income < 10) {
    tax = income * 0.05;
    cout << "Tax: " << tax << " %" << endl;
  } else if (income < 20) {
    tax = income * 0.10;
    cout << "Tax: " << tax << " %" << endl;
  } else {
    tax = income * 0.20;
    cout << "Tax: " << tax << " %" << endl;
  }

  cout << "Tax = " << (tax * 100000) << " Rupees" << endl;
  return 0;

}