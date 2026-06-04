// Question 1
#include <iostream>
using namespace std;
int main(){ 
  int a, b;
  int n;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  if (a > b){
    cout << a << " is greater than " << b << endl;
  }
  else if (a < b){
    cout << a << " is less than " << b << endl;
  }
  else{
    cout << a << " is equal to " << b << endl;
  }
  cout << "Enter a number: ";
  cin >> n; 
  if (n % 2 == 0){
    cout << n << " is an even number." << endl;
  }
  else{
    cout << n << " is an odd number." << endl;
  }

 return 0;
}


