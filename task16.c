#include <stdio.h>
void reverse_string(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0;i<len/2;++i){
    char temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
    }
}
int main(){
    int size;
    scanf("%d",&size);
    char str[size];
    scanf("%s",str);
    reverse_string(str);
    printf("reversed string: %s\n ",str);
    return 0;
}

