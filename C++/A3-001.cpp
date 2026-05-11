#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N,ans=0;
    cin >> N;
    vector<tuple<int,int,int,int>> st(1);
    for(int a,l,b,r;N--;st.emplace_back(a,l,b,r))
        cin >> a >> l >> b >> r;
    stack<pair<int,bool>> tmp({{1,0}});
    map<int,int> dp;
    while(tmp.size()){
        auto [k,vis] = tmp.top();
        tmp.pop();
        auto [a,l,b,r] = st[k];
        if(vis){
            if(!a) l = dp[l];
            if(!b) r = dp[r];
            ans += abs(l-r);
            dp[k] = 2*max(l,r);
        }
        else{
            tmp.emplace(k,1);
            if(!a) tmp.emplace(l,0);
            if(!b) tmp.emplace(r,0);
        }
    }
    return !bool(cout << ans);
}
