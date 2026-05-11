#include <iostream>
#include <set>
using namespace std;
set<char> vw{'A','E','I','O','U'};
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N,cnt=0;
    cin >> N;
    for(char j;N--;cnt+=vw.count(j))
        cin >> j;
    cout << cnt;
}
