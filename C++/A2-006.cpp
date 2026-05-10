#include <iostream>
using namespace std;
char m[32][32];
int pt(int i=0,int j=0){
    if(m[i][j]!='.') return 0;
    m[i][j]='X';
    return 1+pt(i,j+1)+pt(i+1,j);
}
int main(int ac,char** av){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>ac;
    for(int i=ac,j;i--;)for(j=ac;j--;cin>>m[i][j]);
    cout<<pt();
}
