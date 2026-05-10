#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string txt;
    cin >> txt;
    int x=0,y=0;
    for(char c : txt){
        if(c == 'N') x = x+1;
        else if(c == 'E') ++y;
        else if(c == 'W') x -= 1;
        else y--;
    }
    cout<< x <<' '<< y <<' ';
    return !bool(cout << abs(x)+abs(y));
}
