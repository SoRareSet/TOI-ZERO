#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long X , Y , R;
    cin >> X >> Y >> R;
    X *= X , Y *= Y , R *= R;
    for(int j=0;j++<ac;cout<<(j%5?'*':'X'));
    if(X + Y > R) cout<<"OUT";
    else if(X + Y < R) cout<<"IN";
    else cout<<"ON";
}
