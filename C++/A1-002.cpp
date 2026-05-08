#include <iostream>
using namespace std;
int main(int ac,char* av[]){
    cin.tie(0)->sync_with_stdio(0);
    cin >> ac;
    for(int n : {10,5,2,1}){
        cout<< n <<" = "<< ac/n <<"\n";
        ac %= n;
    }
}
