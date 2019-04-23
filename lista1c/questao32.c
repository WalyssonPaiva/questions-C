#include<stdio.h>

#define _USE_MATH_DEFINES
#include<math.h>

main(){
    double x,acumulador,numerador,denominador,y=0;
    int n, i;
    scanf("%lf",&x);
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        acumulador = pow(-1,i) * pow(x,(2*i)+1)/fatorial(2*i+1);
        y = y+acumulador;
    }
    printf("seno(%.2lf) = %.6lf",x,y);
}
int fatorial(int n){
    if(n>1){
        n = n* fatorial(n-1);
    }
    return n;
}