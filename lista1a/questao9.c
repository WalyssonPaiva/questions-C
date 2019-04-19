#include <stdio.h>
#include <math.h>
main(){
        double massa, aceleracao, tempo, v, s, w;
        scanf("%lf",&massa);
        scanf("%lf",&aceleracao);
        scanf("%lf",&tempo);

        v = aceleracao * tempo;
        s = (aceleracao * (tempo*tempo))/2;
        massa = massa * 1000;
        w = (massa*(v*v))/2;
        v = v*3.6;

        printf("VELOCIDADE = %.2lf\n",truncf(v*100.0)/100.0);
        printf("ESPACO PERCORRIDO = %.2lf\n",truncf(s*100.0)/100.0);
        printf("TRABALHO REALIZADO = %.2lf\n",truncf(w*100.0)/100.0);

}