#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int mn = 2147483647;
    for(int i = 0,j;i<3;i++)
        cin >> j , mn = j<mn?j:mn;
    cout << mn;
}
