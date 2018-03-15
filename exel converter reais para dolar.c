#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    float r,c,d;
    printf("quantos reais vc tem r$: ");
    scanf("%f",&r);
    printf("informe a cotaçao do dolar c: ");
    scanf("%f",&c);
    d=r/c;
    printf(" vc tem em dolares us$: %.2f\n",d);
    system("pause");
}
