#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2;
    printf("digite o 1°numero: ");
    scanf("%d",&n1);
    printf("digite o 2°numero: ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("o 1°numero e maior que o 2°numero,e a diferença é: %d\n",n1-n2);
    }
    else{
        printf("o 2°numero e maior que o 1° numero,e a diferença é: %d\n",n2-n1);
    }
    system("pause");

}

