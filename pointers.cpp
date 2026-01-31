#include <iostream>

using namespace std;

int main() {
  double* p;  // dataType* p
  double i = 1.1;
  p = &i;
  cout << "Address of " << i << ": " << p << endl;
}