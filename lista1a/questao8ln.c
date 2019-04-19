#include<stdio.h>

main(){
    float prF,pcD,pcI;
    scanf("%f",&prF);
    scanf("%f",&pcD);
    scanf("%f",&pcI);

    prF = prF + ((pcD/100)*prF) + ((pcI/100)*prF);

    printf("O VALOR DO CARRO E = %.2f\n",prF);

}