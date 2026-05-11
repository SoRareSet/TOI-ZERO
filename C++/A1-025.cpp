#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pk;
    cin >> pk;
    char p = toupper(pk[0]);
    char k = tolower(pk.back());
    pk.pop_back();
    if(p=='A') cout<<"ace";
    else if(p=='J') cout<<"jack";
    else if(p=='Q') cout<<"queen";
    else if(p=='K') cout<<"king";
    else cout << pk;
    cout<<" of ";
    if(k=='s') cout<<"spades";
    else if(k=='c') cout<<"clubs";
    else if(k=='h') cout<<"hearts";
    else cout<<"diamonds";
}
