#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string id;
    cin >> id;
    cout<<(id.substr(2,2)=="16"?"yes":"no");
}
