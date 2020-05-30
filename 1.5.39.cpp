#include <iostream>
using namespace std;

int main(){
	int n, sum=0;
	cin >> n;
	bool b;
	for (int i=1; i<=n; i++){
		b = false; // 假设与7无关
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) 
			b = true; // 假设不成立
		if (!b) sum += i*i; 
	}
	cout << sum << endl;
	return 0;
}
