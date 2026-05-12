#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int h,m; cin>>h>>m;
    m*=h,h=m/60,m%=60;
    if(h) cout<<h<<" hours ";
    if(m) cout<<m<<" minutes";
    if(!(h+m)) cout<<"No teaching";
}
