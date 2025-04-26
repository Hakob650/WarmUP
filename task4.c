#include <stdio.h>
int main(){
    int size;
    printf("enter size");
    scanf("%d",&size);
    char  arr[size];
    printf("enter array");
    for(int i=0;i<size;++i){
        scanf(" %c",&arr[i]);
    }
    for(int i=0;i<size;++i){
        if(arr[i]>=48 && arr[i]<=57){
            printf("%c",arr[i]);
        }
    }return 0;
}
