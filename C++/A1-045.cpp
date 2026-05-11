#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int m=35,N;
    cin >> N;
    if(N-->1) m += 5*N+(N>9)*(3*N-27);
    cout << m;
}
