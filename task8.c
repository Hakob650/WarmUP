#include <stdio.h>
int main(){
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr1[size];
    printf("enter array1");
    for(int i=0;i<size;++i){
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    printf("enter array2");
    for(int i=0;i<size;++i){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size;++i){
        printf("%d %d\n",arr1[size-1-i],arr2[size-1-i]);
    }
    return 0;
}
