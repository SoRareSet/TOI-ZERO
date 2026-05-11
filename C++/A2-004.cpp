#include <iostream>
using namespace std;
int v[302];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>v[301];
    for(int i=0,j;i<v[301];++i){
        cin>>j,v[j]++;
        if(v[j]>v[0]) v[0]=v[j];
    }
    return !bool(cout<<v[0]);
}
