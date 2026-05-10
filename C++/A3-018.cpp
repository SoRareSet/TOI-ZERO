#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N,K;
    cin >> N >> K;
    float x = cbrt(3*K)-0.5;
    x -= (2*(x*x*x)+3*(x*x)-6*K)/(6*(x*x)+6*x+1);
    return !bool(cout << N-int(x));
}
