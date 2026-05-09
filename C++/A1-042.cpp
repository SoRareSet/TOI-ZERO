#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string txt;
    cin >> txt;
    complex<int> pt(0,0);
    for(char c : txt){
        if(c == 'N') pt += 1i;
        else if(c == 'E') pt += 1;
        else if(c == 'W') pt -= 1;
        else pt -= 1i;
    }
    auto [a,b] = pt;
    cout<< a <<' '<< b <<' ';
    return !bool(cout << abs(a)+abs(b));
}
