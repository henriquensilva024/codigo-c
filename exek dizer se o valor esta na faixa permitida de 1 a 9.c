#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("digite um numero n: ");
    scanf("%d",&n);
    if(n>=1&&n<=9){
        printf ("o valor esta na faixa permitida de 1 a 9\n");
    }else{
        printf("o valor esta fora da faixa permitida de 1 a 9\n");
    }
    system("pause");
}

