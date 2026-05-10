#include <stdio.h>
int main(int ac,char* av[]){
    scanf("%d%s",&ac,av[0]);
    if(ac<5) ac=0;
    else if(ac<18) ac=100;
    else ac=150;
    if(av[0][0]=='W') ac/=2;
    printf("%d",ac);
}
