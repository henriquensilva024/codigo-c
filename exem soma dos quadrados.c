#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d;
    printf("informe o primeiro numero a: ");
    scanf("%d",&a);
    printf("informe o segundo numero b: ");
    scanf("%d",&b);
    printf("informe o terceiro numero c: ");
    scanf("%d",&c);
    d=pow(a,2)+pow(b,2)+pow(c,2);
    printf("a soma do quadrado de a,b e c é: %d\n",d);
    system("pause");
}
