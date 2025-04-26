#include <stdio.h>
void Func(){
    for(int i=1;i<=10;++i){
        for(int j=1;j<=10;++j){
            printf("%d * %d=%d\n",i,j,i*j);
        }
    }return;
}
int main(){
    Func();
    return 0;
}
