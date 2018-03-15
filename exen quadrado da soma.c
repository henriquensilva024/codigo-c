#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d,e;
    printf("informe o primeiro numero a: ");
    scanf("%d",&a);
    printf("informe o segundo numero b: ");
    scanf("%d",&b);
    printf("informe o terceiro numero c: ");
    scanf("%d",&c);
    d=a+b+c;
    e=pow(d,2);
    printf("o quadrado da soma de a,b e c é: %d\n",e);
    system("pause");
}
