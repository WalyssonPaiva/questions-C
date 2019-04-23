#include <stdio.h>
#include <math.h>

main(){

    double numero, inteiro, fracionario;
    int contador=1;
    scanf("%lf",&numero);
    fracionario = modf(numero, &inteiro);

    printf("%lf\n", inteiro);
    printf("%lf\n", fracionario);

    while(fracionario<0.0){
        contador*=10;
    }
    printf("%d\n", contador);

    
}