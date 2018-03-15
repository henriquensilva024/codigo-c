#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");

    int v,c,l,h;
    printf("digite o valor do comprimento c: ");
    scanf("%d", &c);
    printf("digite o valor da largura l: ");
    scanf("%d" ,&l);
    printf("digite o valor da altura h: ");
    scanf("%d" ,&h);
    v=c*l*h;

   printf(" o volume é: %d\n" ,v);
    system("pause");

}
