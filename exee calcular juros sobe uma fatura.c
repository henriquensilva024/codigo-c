#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
    setlocale(LC_ALL, "Portuguese");


    float prestacao, valor,taxa,tempo;
    printf("Digite o Valor v: ");
    scanf("%f", &valor);
    printf("Digite a Taxa ta: ");
    scanf("%f", &taxa);
    printf("Digite o Tempo em meses t: ");
    scanf("%f", &tempo);
     prestacao = valor+ valor*(taxa/100)*tempo;
    printf("o valor da Prestacao é: %f\n", prestacao);
    system("PAUSE");

}

