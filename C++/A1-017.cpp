#include <iostream>
#include <tuple>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int y,m,d;
    cin>> y >> m >> d;
    tuple<int,int,int> p1(y,m,d);
    cin>> y >> m >> d;
    tuple<int,int,int> p2{y,m,d};
    if(p1>p2) return !bool(cout<<2);
    if(p1<p2) return !bool(cout<<1);
    return !bool(cout<<0);
}
