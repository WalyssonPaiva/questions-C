#include <stdio.h>

main(){
    float h,valor=0;
    scanf("%f",&h);
    while(h-3>=0){
        valor = valor +10;
        h = h-3;
    }
    while(h>0){
        h--;
        valor = valor +5;
    }
    printf("O VALOR A PAGAR E = %.2f\n",valor);

}