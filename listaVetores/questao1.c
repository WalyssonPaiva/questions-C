#include <stdio.h>
/*
Faça um programa que receba um vetor V com N números inteiros e posteriormente receba M números
e verifique se eles estão ou não no vetor.
*/
main(){
    int vetor[100000], n, m, busca, teste= 0;
    scanf("%d", &n);//numero de elementos do array
    n--;
    for(int i =0; i<=n;i++){ //preenche o array
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&m);//numero de comparações a serem feitas
    m--;
    for(int j=0; j<=m;j++){
        scanf("%d",&busca);
            for(int k=0;k<=n;k++){
                if(vetor[k]==busca)
                    teste = 1; //se o numero for encontrado no vetor, teste =1
            }
            if(teste){
                    printf("ACHEI\n");
                }else{
                    printf("NAO ACHEI\n");    
                }
                teste =0; //reseta o teste
            }

    }
