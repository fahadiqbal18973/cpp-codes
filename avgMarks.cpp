#include <iostream>
using namespace std;
int main() {
  int marks1 , marks2 , marks3 ;
  cout << "Enter marks of subject 1 : ";
  cin >> marks1;
  cout << "Enter marks of subject 2 : ";
  cin >> marks2;
  cout << "Enter marks of subject 3 : ";
  cin >> marks3;
  int avg = (marks1 + marks2 + marks3) / 3;
  cout << " Average marks of 3 subjects is : " << avg << endl;
  return 0;
}