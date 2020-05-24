#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  float x, s = 1.0;
  cin >> x >> n;
  for(int i = 1; i <= n; i++){
    s += pow(x, i);
  }
  cout << fixed << setprecision(2) << s << endl;
  return 0;
}
