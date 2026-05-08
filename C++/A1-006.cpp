#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m , n;
    cin >> m >> n;
    if(not n) return 0;
    if(m % n) cout << "no";
    else cout << "yes";
}
