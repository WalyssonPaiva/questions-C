#include <stdio.h>

main() {
  int n, cateto1, cateto2, hipotenusa;
  int existe;

  printf("Digite o comprimento maximo da hipotenusa: ");
  scanf("%d" , &n);

  for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {

      for(cateto1 = 1; cateto1 < hipotenusa; cateto1++){
          
          for(cateto2 = cateto1;cateto2<hipotenusa;cateto2++){
              if(cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa){
                  printf("hipotenusa = %d, catetos %d e %d\n",hipotenusa,cateto1,cateto2);
                }
            }
        }

    }   
}