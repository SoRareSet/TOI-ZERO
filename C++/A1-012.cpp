#include <iostream>
using namespace std;
int main(int ac,char** av){
    cin.tie(0)->sync_with_stdio(0);
    cin>>ac>>av[0][0];
    cout<<ac<<' '<<av[0][0]<<' ';
    cout<<ac%10<<ac/10<<" = ";
    if(av[0][0]=='+') cout<<(ac/10+ac%10)*11;
    else cout<<(ac%10*10+ac/10)*ac;
}
