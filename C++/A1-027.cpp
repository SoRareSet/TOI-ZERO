#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string txt; cin>>txt;
    for(auto it=txt.rbegin();it!=txt.rend();)
        cout<<char(tolower(*it++));
}
