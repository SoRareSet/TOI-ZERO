#include <iostream>
#include <string>
using namespace std;
int main(int ac,char** av){
    cin.tie(0)->sync_with_stdio(0);
    cin>>ac; cout<<string(ac,'*');
    if(ac>2) cout<<'\n'<<string(ac-2,'*');
    if(ac>4) cout<<'\n'<<string(ac-4,'*');
}
