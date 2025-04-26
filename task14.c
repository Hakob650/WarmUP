#include <stdio.h>
int Sum(int N){
    int sum=0;
    while(N!=0){
        sum+=N%10;
        N/=10;
    }return sum;
}
int main(){
    int N;
    scanf("%d",&N);
    int res=Sum(N);
    printf("%d",res);
    return 0;
}
