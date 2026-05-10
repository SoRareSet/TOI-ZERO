#pragma GCC optimize("O3")
#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int m,n;
    cin>>m>>n;
    char *t = new char[n]();
    for(int i=0,j;i++<m;cout<<'\n')
        for(j=0;j<n;j++){
            if(t[j]=='*') cout<<"* ",cin>>t[j];
            else cin>>t[j],cout<<t[j]<<' ';
        }
}
