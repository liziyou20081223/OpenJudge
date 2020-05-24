#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, temp, p=1, q=2;
    double x=0;
    cin >> n;
    for (int i=0; i<n; i++){
        x += (double)q/p;
        temp = q;
        q += p;
        p = temp;
    }
    cout << fixed << setprecision(4) << x << endl;
    return 0;
}
