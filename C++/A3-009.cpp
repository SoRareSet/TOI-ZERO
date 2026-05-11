#pragma GCC optimize("O3")
#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N,K;
    cin>>N>>K;
    int pt[K]={},mn=N;
    for(int i=0,j;i++<N;pt[--j]++) cin>>j;
    for(int p:pt) if(p<mn) mn=p;
    return !bool(cout<<N-mn*K);
}
