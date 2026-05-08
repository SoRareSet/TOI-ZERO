#include <iostream>
using namespace std;
int main(int ac,char* av[]){
    cin.tie(0)->sync_with_stdio(0);
    bool ex = 1;
    for(int j:{10,40,50}){
        cin >> ac;
        if(ac < j/2) ex = 0;
    }
    if(ex) return !bool(cout<<"pass");
    return !bool(cout<<"fail");
}
