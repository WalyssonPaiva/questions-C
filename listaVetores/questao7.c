#include <stdio.h>
/*
Faça um programa que receba vários vetores de números inteiros, calcule o maior elemento (M) de cada
vetor e apresente a frequência dos valores menores ou iguais a i, onde i = 0, 1, 2, . . . , M.
*/
main(){
    int n=1, vetor[10000], maior=0, acumulador=0;;
    while(n!=0){
        scanf("%d",&n);
        if (n!=0) {
             for(int i = 0; i<n;i++){
                 scanf("%d", &vetor[i]); //preenchendo o vetor
                 if(vetor[i]>=maior){
                     maior = vetor[i];
                 }
            }
            for(int j = 0; j<=maior;j++){
                for(int k = 0; k<n;k++){ //vou comentar isso daqui nao vei, quebrei a cabeça nessa merda
                    if(j >= vetor[k]){
                        acumulador++;
                    }
                }
                printf("(%d) %d\n", j,acumulador); 
                acumulador = 0;
            }
        }
    }
}