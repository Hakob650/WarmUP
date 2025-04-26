#include <stdio.h>
int main(){
    int num;
    printf("enter num");
    scanf("%d",&num);
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }for(int i=0;i<size;++i){
            if(arr[i]==num){
            printf("YES\n");
            return 0;
            }
    }printf("NO");
   return 0; 
}
