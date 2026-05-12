#include <bits/stdc++.h>
using namespace std;
#define sub(n) substr(0,n)
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string txt,b = "BUU"; cin >> txt;
    int x = txt.length(),fb = txt.find('B');
    long long np = txt.npos;
    for(char &c : txt) c = toupper(c);
    if(fb==np) cout << string(b,x/3)+b.sub(x%3);
    else if(txt.find(b)==np)
        cout << txt.sub(fb+1)+string(x-fb-1,'U');
    else{
        while(txt.find(b)!=np) b+="U";
        cout << "yes " << b.length()-2;
    }
}
