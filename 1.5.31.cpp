#include <iostream>
#include <vector>
using namespace std;

int getMu(int a, int b){
  int cnt = 0;
  for(int i = 0; i < b; i++){
    if(i > a)
      break;
    if(a % (i + 1) == 0)
      cnt++;
  }
  return cnt;
}

int main() {
  int n, m, c;
  vector<int> ans;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    if(getMu(i, m) % 2 == 1){
      ans.push_back(i);
    }
  }
  for(int i = 0; i < ans.size() - 1; i++){
    cout << ans[i] << ",";
    c = i;
  }
  cout << ans[c + 1] << endl;
  return 0;
}
