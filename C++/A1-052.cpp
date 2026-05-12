#include <iostream>
using namespace std;
int main(int ac,char* av[]){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> ac;
    if(ac%100 or ac/20001)
        return bool(cout<<"ERROR")&&0;
    for(int k : {1000,500,100}){
        if(ac/k) cout<<k<<" = "<<ac/k<<'\n';
        ac %= k;
    }
}
