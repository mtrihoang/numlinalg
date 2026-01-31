#include <iostream>

using namespace std;

int main() {
  vector<double> v = {1., 2., 3., 4., 5.};
  cout << "Traditional for loop:" << endl;
  for (size_t i = 0; i < v.size(); ++i) {
    cout << "Address of element " << i + 1 << " = " << &v[i] << endl;
  }

  cout << "\nRange-based for loop" << endl;
  int j = 0;
  for (double& e : v) {
    cout << "Address of element " << j + 1 << " = " << &v[j] << endl;
    ++j;
  }
}