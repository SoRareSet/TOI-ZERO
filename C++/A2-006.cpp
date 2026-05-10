#include <iostream>
using namespace std;
int main(int ac,char** av){
    cin.tie(0)->sync_with_stdio(0);
    cin>>ac;
    av = new char*[ac+1]{};
    for(int i=ac,j;i--;){
        av[i] = new char[ac+1]{};
        for(j=ac;j--;cin>>av[i][j]);
    }
    av[ac] = new char[ac+1]{};
    auto pt = [&](auto&& re,int i,int j){
        if(av[i][j]!='.') return 0;
        av[i][j]='X';
        return 1+re(re,i,j+1)+re(re,i+1,j);
    };
    return !bool(cout<<pt(pt,0,0));
}
