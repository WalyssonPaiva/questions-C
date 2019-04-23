#include<stdio.h>

main(){
    int x,divisor=2,mult;
    scanf("%d",&x);

    if(x>1){
        printf("%d = ",x);
        while(x>1){
            mult=0;
            while(x%divisor==0){
                mult++;
                x=x/divisor;
               if(mult !=0){
                    if(x==1){
                    printf("%d\n",divisor);
                }else{
                    printf("%d x ",divisor);
                }
                }
            }
            divisor++;
        }
    }else{
        printf("Fatoracao nao e possivel para o numero %d!\n",x);
    }
}