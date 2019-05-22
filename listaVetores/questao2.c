#include <stdio.h>
/*
Dado um vetor V de tamanho N e um inteiro K, contabilize quantos elementos de V são maiores ou
iguais ao inteiro K
*/
main(){
    int vetor[1000], n, k, contador=0;
    
    do {
        scanf("%d", &n);    //lê o numero de elementos do array
    } while (n>1000 || n<1); //se estiver fora deste intervalo será invalido, então leia de novo

    n--; //decrementa porque eu quero

    for(int i =0; i<=n;i++){
        scanf("%d",&vetor[i]); //preenche o array
    }

    scanf("%d",&k); //lê um número qualquer

    for(int j=0;j<=n;j++){
        if(vetor[j]>=k) //verifica se o numero do vetor é maior que o "numero qualquer"
            contador++;
    }
    printf("%d\n", contador);//quantidade de numeros maiores
}