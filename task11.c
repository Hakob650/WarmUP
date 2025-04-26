#include <stdio.h>
int MulTable(int N){
    for(int i=1;i<=N;++i){
        printf("%d * %d=%d\n",i,N,N*i);

    }return 0;
}
int main(){
    int N;
    scanf("%d",&N);
    int res=MulTable(N);
    printf("%d",res);
    return 0;
}
