#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    char nome[10],sexo[10];
    printf("digite o nome: ");
    gets(nome);
    printf("digite o sexo: ");
    gets(sexo);
    if(sexo[0]=='m'){
        printf (" llmo sr %s\n ",nome);
    }else{
        printf(" llma sra %s\n",nome);
    }
    system("pause");
}

