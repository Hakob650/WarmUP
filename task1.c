#include <stdio.h>
int main(){
    int size;
    int arr1[size],arr2[size];
    printf("enter size");
    scanf("%d",&size);
    for(int i=0;i<size;++i){
        scanf("%d",&arr1[i]);
    }
    for(int j=0;j<size;++j){
        scanf("%d",&arr2[j]);
    }
    int p=1;
    for(int i=0;i<size;++i){
        for(int j=0;j<=i;++j){
            if(i==j){
                 p=arr1[i]*arr2[j];
            }
        }printf("%d",p);
    }
    return 0;
}
