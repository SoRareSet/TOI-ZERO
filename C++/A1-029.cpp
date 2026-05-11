#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string txt,vw="aeiou";
    cin >> txt;
    int cnt=0;
    for(char c:txt)
        cnt += vw.find(c)!=vw.npos;
    cout << cnt;
}
