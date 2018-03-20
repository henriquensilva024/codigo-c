#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("digite um numero n: ");
    scanf("%d",&n);
    if(!(n>3)){
         printf(" %d nao é maior que 3\n",n);
    }

    system("pause");
}

