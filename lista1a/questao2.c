#include<stdio.h>
#include <math.h>

main(){
    float sl,kw,p,c,d;
    scanf("%f",&sl);
    scanf("%f",&kw);

    p = (0.7 * sl)/100;
    c =  kw * p;
    d = c - (c*0.1);
    printf("Custo por kW: R$ %.2f\n",truncf(p*100.0)/100.0);
    printf("Custo do consumo: R$ %.2f\n",truncf(c*100.0)/100.0);
    printf("Custo com desconto: R$ %.2f\n",truncf(d*100.0)/100.0);

}