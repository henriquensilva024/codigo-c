#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float volume, r, altura;
    printf("Digite o valor do Raio R: ");
     scanf("%f", &r);
    printf("digite valor da altura h: ");
     scanf("%f", &altura);
    volume = 3.14159 *pow(r,2) * altura;
    printf("O valor do Volume de uma lata é %f\n", volume);
    system("PAUSE");


}
