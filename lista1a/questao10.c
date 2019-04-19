#include <stdio.h>

main(){
    int x, alg1, alg2, alg3;
    scanf("%d",&x);
    alg1 = (int) x/100;
    x = x%100;
    alg2 = (int) x/10;
    alg3 = x%10;
    x = alg1*1000 + alg2*100 + alg3*10 + ((alg1 + (alg2*3))+(alg3*5))%7;
    printf("O NOVO NUMERO E = %d",x);
}