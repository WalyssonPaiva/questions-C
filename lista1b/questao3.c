#include <stdio.h>

main(){
    int x;
    scanf("%d",&x);
    if(x%5==0.0 && x%3==0){
        printf("O NUMERO E DIVISIVEL\n");
    }else{
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
}