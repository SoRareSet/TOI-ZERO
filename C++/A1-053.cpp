#include <iostream>
#include <valarray>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    valarray<int> c(3);
    for(int &v:c) cin>>v;
    int r,g,b;
    cin>>r>>g>>b;
    c = (c+valarray({r,g,b}))/2;
    cout<<c[0]<<' '<<c[1]<<' '<<c[2];
}
