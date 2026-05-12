#include <iostream>
using namespace std;
int main(int ac,char** av){
    cin.tie(0)->sync_with_stdio(0);
    cin>>ac;
    for(int i=0;i++<12;cout<<'\n')
        cout<<ac<<" * "<<i<<" = "<<i*ac;
}
