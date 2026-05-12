#include <iostream>
using namespace std;
int main(int ac,char** av){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> ac;
    cout.precision(1),cout.setf(ios::fixed);
    for(float a,b,c;ac--;cout<<'\n'){
        cin >> a >> b >> c;
        cout << a+b+c;
        if(a+b+c>=50.0) cout<<",Overloaded";
        if(a>=20.0) cout<<",Check Type Plastic";
        if(b>=20.0) cout<<",Check Type Can";
        if(c>=20.0) cout<<",Check Type Glass";
    }
}
