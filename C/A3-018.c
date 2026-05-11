#include <stdio.h>
#include <math.h>
signed main(){
    int N,K; scanf("%d%d",&N,&K);
    float x = cbrt(3*K)-0.5;
    x -= (2*(x*x*x)+3*(x*x)-6*K)/(6*(x*x)+6*x+1);
    printf("%g",ceil(N-x));
}
