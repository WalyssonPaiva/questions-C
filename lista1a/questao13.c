#include <stdio.h>
#include <math.h>
main(){
    float a,b,c,d,e,f,a2,pt1,pt2,x,y;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    scanf("%f",&f);
    //igualando x com o inverso de d
    a2 = a * -d;
    b = b * -d;
    c = c * -d;
    d= d * a;
    e= e * a;
    f= f * a;
    //soamdno as duas equações
    pt1 = b + e;
    pt2 = c+f;
    //valor do y
    y = pt2/pt1;

    //substituindo y para saber x
    pt1 = c - (b*y);
    x = pt1/a2;

    printf("O VALOR DE X E = %.2f\n",truncf(x*100.0)/100.0);
    printf("O VALOR DE Y E = %.2f\n",truncf(y*100.0)/100.0);

}
