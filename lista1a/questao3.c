#include<stdio.h>
#include<math.h>

main(){
        float f,p,c,m;
        scanf("%f",&f);
        scanf("%f",&p);

        c = (5*(f-32))/9;
        m = p * 25.4; 
        printf("O VALOR EM CELSIUS = %.2f\n",truncf(c*100.0)/100.0);
        printf("A QUANTIDADE DE CHUVA E = %.2f\n",truncf(m*100.0)/100.0);

}