#include <stdio.h>
int main(int ac,char** av){
    for(int j=scanf("%d",&ac);j<=ac;j++)
        putchar(j%5?'*':'X');
}
