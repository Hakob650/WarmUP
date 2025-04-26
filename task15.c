#include <stdio.h>
int Power(int num,int exp){
    int res=1;
    for(int i=0;i<exp;++i){
        res=res*num;
    }return res;
}
int main(){
    int N;
    scanf("%d",&N);
    int exp;
    scanf("%d",&exp);
    int res=Power(N,exp);
    printf("%d",res);
    return 0;
}
