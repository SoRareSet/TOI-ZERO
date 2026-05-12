#include <stdio.h>
#include <math.h>
int main(int ac,char** av){
    scanf("%d",&ac);
    int r = sqrt(ac-1);
    return !printf("%d",2*r-(ac%2==r%2));
}
