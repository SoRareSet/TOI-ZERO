#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    c = 2*(a+b)*c;
    return !bool(cout<<c<<'\n'<<c*d);
}
