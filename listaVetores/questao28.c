#include <stdio.h>
/*
Faça um programa que leia 2 conujuntos (A e B) válidos, sem elementos repetidos, cada um com no
mínimo 1 e no máximo 100 elementos, e imprima A∪B e A∩B.

Entrada:
Durante a entrada de dados, o programa deve ler tamanhos válidos para os conjuntos A e B. Caso o
tamanho informado seja inválido, o programa deve refazer a leitura do tamanho do conjunto. A leitura deve
ser feita separadamente. Uma vez definido os tamanhos dos vetores, o programa deve ler os elementos
de cada vetor. Em seguida, o programa deve apresentar na tela uma linha com o conjunto união, ou seja,
todos os elementos que ocorrem em A e B, e outra linha contendo o conjunto intersecção, ou seja, todos os
elementos que ocorrem em A e B.
O programa deve ler um número inteiro TA, correspondente ao tamanho do conjunto A, até que TA
seja válido, em seguida outro número inteiro TB, correspondente ao tamanho do conjunto B até que TB seja
válido. Uma vez definido os tamanhos dos vetores, o programa deve ler TA+TB elementos, correspondentes
aos elementos de A e B. Durante a leitura dos elementos de um conjunto, o programa deve permitir somente
a leitura de elementos diferentes aos já presentes no conjunto. Caso um elemento lido já esteja presente no
conjunto, o programa deve ignorá-lo e realizar uma nova leitura do elemento.

Saída:
O programa deve apresentar na tela uma linha com o conjunto união, ou seja, todos os elementos que
ocorrem em A e B, e outra linha contendo o conjunto intersecção, ou seja, todos os elementos que ocorrem
em A e B. Os elementos dos conjuntos devem ser apresentados entre parênteses, separados por vírgula e
sem espaços.

Observações:
Não se esqueça que um conjunto válido não permite a existência de elementos repetidos.
*/
main(){
    int ta = 0, tb =0, auxiliar = 0, inicio =1;
    

    while (ta<=0 || ta>100){ 
        scanf("%d",&ta);
    }
    while (tb<=0 || tb>100){
        scanf("%d",&tb);
    }
    int A[ta], B[tb];
    ta--;
    tb--;
    //lendo os numeros do conjunto e validando se o conjunto é valido
    for(int i = 0; i<=ta;i++){
        scanf("%d", &A[i]);
        for(int j = 0; j<=i;j++){
            if( i !=j){
                if(A[i] == A[j]){
                    i-=2;
                }
            }

        }
    }
    //lendo os numeros do conjunto e validando se o conjunto é valido
    for(int i = 0; i<=tb;i++){
        scanf("%d", &B[i]);
        for(int j = 0; j<=i;j++){
            if( i !=j){
                if(B[i] == B[j]){
                    i-=2;
                }
            }

        }
    }

    //conjunto uniao
    printf("(");
    for(int i = 0; i<=ta; i++){ //printa tudo do A
       if(inicio){
           printf("%d", A[i]); 
           inicio = 0;
       }else{
           printf(",%d", A[i]);
       }

    }
    int igual = 0;
    for(int j =0; j<=tb;j++){ // printa os do B que não apareceram no A 
        for(int i = 0; i<=ta;i++){
            if(B[j]==A[i])
                igual = 1;
        }
        if(!igual)
            printf(",%d", B[j]);
        igual = 0;
         
    }
    printf(")\n");




    inicio = 1;
    //conjunto intersecção
    printf("(");
    for(int i = 0; i<=ta;i++){
        for(int j = 0; j<=tb; j++){
            if(A[i] == B[j]){
                if(inicio){
                    printf("%d", A[i]);
                    inicio = 0;
                }else{
                    printf(",%d", A[i]);
                }
                
            }
        }
    }
    printf(")\n");

}