#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
     int n,q;
     printf("digite o numero n: ");
     scanf("%d" ,&n);
     q=pow(n,2);
     printf(" o valor quadrado é: %d\n",q);
     system("pause");
}
