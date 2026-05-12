#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string nm; cin >> nm;
    while(nm.length())
        cout<<nm.back(),nm.pop_back();
}
