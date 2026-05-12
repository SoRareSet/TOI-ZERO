#include <stdio.h>
int main(int ac,char** av){
    for(int j=scanf("%i",&ac);j<=ac;j++)
        putchar(j%5?'*':'X');
}
