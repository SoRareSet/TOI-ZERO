#include <iostream>
using namespace std;
int main(int ac,char* av[]){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> ac;
    if(ac%4) return bool(cout<<"no")*0;
    if(ac<1697) return bool(cout<<"yes")*0;
    if(ac%100==0) return bool(cout<<"no")*0;
    return bool(cout<<"yes")*0;
}
