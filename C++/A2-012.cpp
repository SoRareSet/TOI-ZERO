#include <iostream>
using namespace std;
int sc,t;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    for(int i : {10,25,3})
        cin>>t , sc += t*i;
    return !bool(cout<<sc);
}
