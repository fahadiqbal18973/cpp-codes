#include <iostream>
using namespace std;
int main() {
  int x , y , z;
  cout << "Enter three numbers: ";
  cin >> x >> y >> z;
  if ( x > y && x > z){
    cout << "Largest number : " << x << endl;
  } else if ( y > x && y > z) {
    cout << "Largest number : " << y << endl;
  } else {
    cout << "Largest number : " << z  << endl;
  }
  return 0;
}