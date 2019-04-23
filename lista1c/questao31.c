#include<stdio.h>

#define _USE_MATH_DEFINES
#include<math.h>

main(){
    float x,acumulador,y=0;
    int n, i;
    scanf("%f",&x);
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        acumulador = pow(x,i)/fatorial(i);
        y = y+acumulador;
    }
    y=y+1;
    printf("eˆ%.2f = %.6f\n",x,y);
}
int fatorial(int n){
    if(n>1){
        n = n* fatorial(n-1);
    }
    return n;
}