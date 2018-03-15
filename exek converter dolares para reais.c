#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    float d,c,r;
    printf("quantos dolares vc tem us$: ");
    scanf("%f",&d);
    printf("informe a cotaçao do dolar c: ");
    scanf("%f",&c);
    r=d*c;
    printf("vc tem em reais r$: %.2f\n" ,r);
    system("pause");

}
