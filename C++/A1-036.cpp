#include <iostream>
using namespace std;
signed main(int argc,char* argv[]){
    cin.tie(0)->sync_with_stdio(0);
    cin >> argc;
    for(int i=argc/10;i>-1;i--)
        cout << i*10 << " ";
}
