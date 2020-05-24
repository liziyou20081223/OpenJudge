#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;
  double sum = 0.0;
  cin >> n;
  for(int i = 1; i <= n; i++){
    if(i % 2 == 1){
      sum += 1.0 / i;
      continue;
    }
    sum -= 1.0 / i;
  }

  cout << fixed << setprecision(4) << sum << endl;
  return 0;
}
