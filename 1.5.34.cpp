#include <iostream>
using namespace std;

long long fac(long long a){
  long long sum = 1;
  for(int i = 0; i < a; i++){
    sum *= (i + 1);
  }
  return sum;
}

int main() {
  long long n, s = 0, t;
  cin >> n;
  for(int i = 0; i < n; i++){
    s += fac(i + 1);
  }
  cout << s << endl;
  return 0;
}
