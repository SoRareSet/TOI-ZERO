#include <iostream>
using namespace std;
int main(int ac,char** av){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>ac;
    for(int j=0;j++<ac;cout<<(j%5?'*':'X'));
}
