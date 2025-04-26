#include <stdio.h>
int main(){
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr1[size];
    printf("enter array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    for(int i=0;i<size;++i){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size;++i){
        printf("%d %d\n",arr1[i],arr2[i]);
    
    }return 0;
}
