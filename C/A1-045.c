#include <stdio.h>
int main(){
    int m = 35,N;
    scanf("%d",&N);
    if(N-->1) m += 5*N;
    if(N>9) m += 3*N-27;
    printf("%d",m);
}
