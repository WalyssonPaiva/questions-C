#include <stdio.h>
/*
Faça um programa que receba vários vetores e informe para cada um deles qual o maior elemento e o
indice (da primeira ocorrência) em que encontra-se tal elemento.
*/
main(){
    int n=1, indice, maior=0, vetor[10000];
    while (n!=0) { //executa enquanto nao or 0
        scanf("%d",&n);
        if(n!=0){
            for(int i =0; i<n;i++){
                 scanf("%d",&vetor[i]);
             }

            for(int j=0;j<n;j++){
                if(vetor[j]>=maior){ //escolhe o maior termo
                     maior = vetor[j];
                     indice = j;
                }
             }
             printf("%d %d\n", indice, maior);
             maior = 0;
         }
    }
}