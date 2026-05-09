#include <bits/stdc++.h>
using namespace std;
int main(int ac,char** av){
    cin.tie(0)->sync_with_stdio(0);
    cin>>ac;
    deque<int> x(ac);
    string pt(ac,'+');
    for(char &t : pt) x[--ac]=ac-1,cin>>t;
    do{
        for(int d : x) cout<<pt[d]<<' ';
        cout<<'\n';
        ac++;
    }while(next_permutation(x.begin(),x.end()));
    return !bool(cout<<ac);
}
