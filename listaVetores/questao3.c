#include <stdio.h>
/*
Escreva um programa em C para armazenar n valores inteiros em um vetor, e depois imprimi-los na
ordem inversa a qual foram lidos.
*/
main(){
    int vetor[5000], n , inverso[5000];

    scanf("%d",&n);//tamanho máximo de 5000
 for(int i = 0; i<n;i++){
     scanf("%d", &vetor[i]);
 }
    int final = n-1;
    //inverter o vetor:
    for(int j = 0; j<n;j++){
        inverso[j] = vetor[final];
        final--;
    }
    //imprimindo o vetor inverso na tela XD
    for(int k =0; k<n;k++){
        printf("%d ", inverso[k]);
    }

}