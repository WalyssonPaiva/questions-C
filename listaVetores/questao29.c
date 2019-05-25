#include <stdio.h>
/*
Faça um algoritmo que aloque dois vetores V1 e V2 com o tamanho de cada entrada q1 e q2, receba os
q1 valores no vetor V1 e os q2 valores no vetor V e construa um terceiro vetor, Vr, com a intercalação dos
vetores V1 e V2 de forma ordenada.

Entrada:
A entrada consiste de dois número positivo q1 e q2 , sendo 0 < q(1,2) ≤ 500000, representando a
quantidade de entradas do programa. Seguido de q1 +q2 linhas, onde nas q1 primeiras linhas estão os q1
valores e nas demais q2 linhas estão os q2 valores. Esses valores são naturais n, 0 ≤ n ≤ 999999. E ainda,
dentro do mesmo bloco é garantido que o número n representado na linha q é menor que o número que está
em q+1 e maior que ou igual ao que está em q-1. Ou seja: n(q-1) ≤ n(q) < n(q+1) para todo q.

Saída:
A saída deverá ser todos os q1 +q2 valores das duas entradas intercalados e impressos de forma crescente.
*/
main(){
    int q1 = 0, q2 =0, auxiliar = 0;
    

    while (q1<=0 || q1>500000){ //enquanto nao for um valor válido
        scanf("%d",&q1);
    }
    while (q2<=0 || q2>500000){
        scanf("%d",&q2);
    }
    int q3 = q1+q2;
    int vetor1[q1], vetor2[q2], vetor3[q3]; //definindo o tamanho dos vetores
    q1--;
    q2--;
    q3--;

    for(int i =0; i<=q1;i++){
        scanf("%d", &vetor1[i]);
    }

   for(int i =0; i<=q2;i++){
        scanf("%d", &vetor2[i]);
    }


    for(int i = 0; i<=q3;i++){
        if(i<=q1)
            vetor3[i] = vetor1[i];
        else
            vetor3[i] = vetor2[i-q1-1];
    }

    //ordenação do vetor 3

    for(int i = 0; i<=q3;i++){
        if(i<q3){
            if(vetor3[i]>vetor3[i+1]){
            auxiliar = vetor3[i];
            vetor3[i] = vetor3[i+1];
            vetor3[i+1] = auxiliar;
            i=-1;
        }
        }
       
    }
    for(int i =0; i<=q3;i++){
        printf("%d\n", vetor3[i]);
    }

}
