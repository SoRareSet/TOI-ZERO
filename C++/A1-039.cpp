#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long m = 1 , n;
    cin >> n;
    fact:
        m *= n--;
        if(n>1) goto fact;
    return !bool(cout << m);
}
