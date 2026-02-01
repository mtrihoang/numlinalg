#include <iostream>

using namespace std;

int main() {
  double* p;  // dataType* p
  double i = 1.1;
  p = &i;
  cout << "Address of p (" << p << "): " << &p << endl;
  cout << "Value stored in p (i)" << ": " << *p << endl;
  cout << "Value stored in p (i)" << ": " << p[0] << endl;
  cout << "Address of i (" << i << "): " << p << endl;

  double* h = 0;
  double j = 1.7;
  h = &j;
  cout << "\nAddress of h (" << h << "): " << &h << endl;
  cout << "Value stored in h (j)" << ": " << *h << endl;
  cout << "Value stored in h (j)" << ": " << h[0] << endl;
  cout << "Address of j (" << j << "): " << &j << endl;
}