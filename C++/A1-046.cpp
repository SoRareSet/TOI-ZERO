#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int m[2]={},sc=0,N,i; cin >> N;
    while(N--) cin>>i,sc+=i,m[i&1]++;
    cout<<"SUM "<<sc<<"\nEVEN "<<m[0]<<"\nODD "<<m[1];
}
