#include <cstdio>
#include <set>
using namespace std;
int N,sm,cnt;
int main(){
    cin>>N;
    multiset<float> tmp;
    for(float i=N,t;i--;tmp.insert(t))
        scanf("%f",&t),sm+=t,cnt+=(t>37.0);
    printf("SUM=%.2f\nAVG=%.2f\nMAX=",sm,sm/N);
    printf("%.2f\nMIN=%.2f",*tmp.rbegin(),*tmp.begin());
    printf("\nALERT=%d\nSORTED=",cnt);
    for(auto t:tmp) cout<<t<<' ';
}
