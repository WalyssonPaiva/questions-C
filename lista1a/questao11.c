#include <stdio.h>
main(){
    int x, alg1, alg2, alg3;
    scanf("%d",&x);
    alg3 = (int) x/100;
    x = x%100;
    alg2 = (int) x/10;
    alg1 = x%10;
    x = alg1*100 + alg2*10 + alg3;
    printf("%d\n",x);
    


}