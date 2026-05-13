#include <iostream>
usig namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int mn=2E9,N,cnt=0;
    cin >> N;
    for(int i=0,p,v;N--;){
        cin >> p >> v;
        v>mn?cnt++:v=mn;
    }
    cout << cnt;
}
