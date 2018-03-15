#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
    setlocale(LC_ALL, "Portuguese");
    float tempo,velocidade,distancia,litros_usados ;
    printf("Digite a Velocidade Media em km/h v: ");
    scanf("%f", &velocidade);
    printf("Digite o Tempo da viagem em horas t: ");
    scanf("%f", &tempo);
    distancia=tempo*velocidade;
    litros_usados=distancia/12;
    printf("tempo da viagem é: %f\n", tempo);
    printf("a velocidade media da viagem é: %f\n", velocidade);
    printf("a distancia percorrida foi: %.2f\n", distancia);
    printf(" a quantidade de litros usados foi: %.2f\n", litros_usados);
    system("PAUSE");

}

