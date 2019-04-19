#include<stdio.h>
#include <math.h>

main(){
    float raio, altura ,ac,at,al , valor;
    scanf("%f",&raio);
    scanf("%f",&altura);
    ac = 3.14159 * pow(raio,2);
    al = 2 * 3.14159 * raio * altura;
    at = 2*ac + al;
    valor = at*100;
    printf("O VALOR DO CUSTO E = %.2f\n",truncf(valor*100.0)/100.0);

}