#include <stdio.h>
/*
Escreva um programa em C para ler n elementos inteiros em 
um vetor, e depois imprimi-los.
*/
main(){
 int vetor[5000], n;

    scanf("%d",&n);//tamanho máximo de 5000
    for(int i = 0; i<n;i++){
        scanf("%d", &vetor[i]); //preenchendo o vetor
    }
        for(int j = 0; j<n;j++){
        printf("%d ", vetor[j]);; //printando o vetor
    }
}