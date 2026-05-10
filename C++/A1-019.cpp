#include <stdio.h>
#include <set>
int main(){
    std::set<int> tmp;
    for(int i=0,j;i++<3;tmp.insert(j)) scanf("%d",&j);
    switch(tmp.size()){
        case 1: return !(bool)printf("all the same");
        case 2: return !(bool)printf("neither");
        case 3: return !(bool)printf("all different");
    }
}
