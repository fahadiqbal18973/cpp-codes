#include <iostream> 
using namespace std;
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int count = 1;
  while(count <= n){
    cout << count ;
    count++;
    cout << " ";
  }
  cout << endl;
  return 0;
}