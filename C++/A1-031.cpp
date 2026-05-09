#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string num;
    cin >> num;
    num.insert(num.end()-3,1,',');
    cout << num;
}
