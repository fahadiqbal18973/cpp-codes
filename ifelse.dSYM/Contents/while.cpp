#include <iostream>
using namespace std;
int main() {
  int n = 8595876;
  int digitSum = 0;
  while (n > 0){
    int lastDig = n % 10;
    digitSum += lastDig;  
    cout << lastDig << " ";
    n = n / 10;
  }
  cout << endl;
  cout << "Sum of digits: " << digitSum << endl;  
  return 0;
}