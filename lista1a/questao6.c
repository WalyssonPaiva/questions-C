#include <stdio.h>
#include <math.h>

main(){
    float h, a , ab, area;
    scanf("%f%f",&h,&a);

    ab = (3 * (a * a) * sqrt(3))/2;
    area = (ab * h)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", truncf(area*100.0)/100.0);
}