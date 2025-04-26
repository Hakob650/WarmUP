#include <stdio.h>
int main(){
    int size;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array");
    for(int i=0;i<size;++i){
        scanf("%d",&arr[i]);
    }int sum=0;
    int count=0;
    for(int i=0;i<size;++i){
        sum+=arr[i];
        count++;
    }int res=sum/count;
    printf("%d",res);
    return 0;
}
