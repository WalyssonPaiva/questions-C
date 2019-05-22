#include <stdio.h>
/*
Elabore um programa que armazene n valores em um vetor, e depois imprima a soma de todos os
elementos inseridos.
*/
main(){
     int vetor[5000], n, somatorio=0;

    scanf("%d",&n);//tamanho máximo de 5000
    for(int i = 0; i<n;i++){
        scanf("%d", &vetor[i]); //preenchendo o vetor
    }
    

    for(int j = 0; j<n;j++){
        somatorio+= vetor[j];//somatório dos termos do vetor
    }
    printf("%d\n", somatorio);
}