#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main(){
    setlocale(LC_ALL,"portuguese");
    float a,r,;
    printf("informe o valor do raio r: ");
    scanf("%f",&r);
    a= 3,14159*pow(r,2);
    printf("a area da circunferencia é: %f\n",a);
    system("pause");
}
