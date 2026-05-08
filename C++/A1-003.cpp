#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int mx = -2147483647;
    for(int i=0,j;i<3;i++){
        cin >> j;
        if(j > mx) mx = j;
    }
    return !bool(cout << mx);
}
