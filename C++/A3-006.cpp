#include <iostream>
#include <priority_queue>
using namespace std;
int main(int ac,char** av,char* envp[]){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> ac;
    priority_queue gx;
    for(int g;ac--;gx.push(g));
    for(int i=1,j=1;gx.size();){
        if(j--) ac+=i*gx.top(),gx.pop();
        else{
            i++,j=10-9*(i%2);
            if(i>199) i++,j--;
        }
    }
    return !bool(cout << ac);
}
