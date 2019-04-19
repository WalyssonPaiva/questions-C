#include <stdio.h>

main(){
    int h,m,s;
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);

    m = m + h*60;
    s = s + m * 60;
    printf("O TEMPO EM SEGUNDOS E = %d\n",s);

}