#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N,mx=0,cnt=0;
    cin >> N;
    vector<int> v(N);
    for(int p;N--;cin >> p >> v[i]);
    for(int p:v) p<mx ? cnt++:mx=p;
    cout << cnt;
}
