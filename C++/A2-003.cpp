#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N , C=0; cin >> N;
    vector<int> a(N+2);
    for(int j=0;j++<N;cin>>a[j]);
    for(int j=0;j++<N;C+=a[j-1]<a[j]&&a[j]>a[1+j]);
    cout << C;
}
