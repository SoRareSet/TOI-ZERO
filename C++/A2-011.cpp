#include <iostream>
#include <set>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    set<int> tmp;
    for(int i=0,j;i++<10;tmp.insert(j)){
        cin >> j;
        if(!tmp.count(j)) cout<< j <<' ';
    }
}
