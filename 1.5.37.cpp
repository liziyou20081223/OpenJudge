#include <iostream>
using namespace std;

int main(){
    int M, N, X, used;
    cin >> M >> N >> X;
    while (X > 0){
        // 1.恢复体力
        used = (M % N == 0)? M / N : M / N+1; // 消耗的能量元素
        if (used > X) break;
        X -= used;
        // 2.开始战斗
        N += M / N;
    }
    cout << N << endl;
    return 0;
}
