#include <stdio.h>
#include <math.h>

main(){
    float a,b,c,d;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d = pow(b,2) -4*a*c;
    printf("O VALOR DE DELTA E = %.2f\n",truncf(d*100.0)/100.0);

}