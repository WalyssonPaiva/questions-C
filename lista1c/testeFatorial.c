#include<stdio.h>

main(){
    int x;
    scanf("%d",&x);
    printf("%d",fatorial(x));
}
int fatorial(int n){
    if(n>1){
        n = n* fatorial(n-1);
    }
    return n;
}