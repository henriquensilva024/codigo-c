#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d,p,s;
    printf("informe o primeiro numero 1°: ");
    scanf("%d",&a);
    printf("inorme o segundo numero 2°: ");
    scanf("%d",&b);
    printf("informe o terceiro numero 3°: ");
    scanf("%d",&c);
    printf("informe o quarto numero 4°: ");
    scanf("%d",&d);
    p=a*c;
    s=b+d;
    printf("o valor do produto do primeiro e terceiro numero(1°x3°) é: %d\n",p);
    printf("o valor da soma do segundo e quarto numero(2°+4°)é: %d\n",s);
    system("pause");
}
