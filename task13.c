#include <stdio.h>
int Factorial(int N){
    long int res=1;
    for(int i=1;i<=N;++i){
        res*=i;
    }return res;
}
int main(){
    int N;
    scanf("%d",&N);
    long int res=Factorial(N);
    printf("%ld",res);
    return 0;
}
