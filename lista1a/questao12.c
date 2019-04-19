#include <stdio.h>

main(){
    int valor,n100,n50,n10,n1;
    scanf("%d",&valor);
    if(valor>=100){
        n100 = (int) valor/100;
        valor = valor%100;
    }
    if(valor>=50){
        n50 = (int) valor/50;
        valor = valor%50;
    }
        if(valor>=10){
        n10 = (int) valor/10;
        n1 = valor%10;
    }
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d", n100,n50,n10,n1);
        
 
    

}