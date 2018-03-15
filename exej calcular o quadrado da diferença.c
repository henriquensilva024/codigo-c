#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c, d;
    printf("digite o primeiro numero a: ");
    scanf("%d",&a);
    printf("digite o segundo numero b: ");
    scanf("%d",&b);
    c=a-b;
    d=pow(c,2);
    printf("o quadrado da diferença é: %d\n",d);
    system("pause");
}
