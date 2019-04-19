#include<stdio.h>
#include <math.h>

main(){
    int n1, n2, n3, c;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1 >=10 || n2>=10 || n3 >=10){
        printf("DIGITO INVALIDO\n");
    }else{
    c = (n1*100) + (n2*10) +n3;
    printf("%d, %d\n", c, c*c);  
    }
}