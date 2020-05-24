#include <iostream>
#include <iomanip>
using namespace std;

long long fac(long long a){
  long long sum = 1;
  for(int i = 0; i < a; i++){
    sum *= (i + 1);
  }
  return sum;
}
int main() {
  int n, t;
  double s = 1.0;
  cin >> n;
  for(int i = 0; i < n; i++){
    s += 1.0 / fac(i + 1);
  }
  cout << fixed << setprecision(10) << s << endl;
  return 0;
}
