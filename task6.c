#include <stdio.h>
int f(int arr1[],int arr2[],int size){
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            if(arr1[i]==arr2[j]){
                return 0;
            }else{
                return -1;
            }
        }
    }return 0;
}
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
    printf("enter array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr2[i]);
    }
    int res=f(arr1,arr2,size);
    printf("%d",res);
    return 0;
}
