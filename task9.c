#include <stdio.h>
double Func(double F){ 
    double C=F*9/5+32;
    return C;
}
int main(){
    double  F;
    scanf("%lf",&F);
    double res=Func(F);
    printf("%lf",res);
    return 0;
}
