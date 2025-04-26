#include <stdio.h>
int Fib(int N){
    if(N==0){
        return 0;
    }else if(N==1){
        return 1;
    }int a=0,b=1,c;
    for(int i=2;i<=N;++i){
        c=a+b;
        a=b;
        b=c;
    }return b;
}
int main(){
    int N;
    printf("enter N");
    scanf("%d",&N);
    int res=Fib(N);
    printf(" %d-th  fibbonaci number is %d\n",N,res);
    return 0;
}
