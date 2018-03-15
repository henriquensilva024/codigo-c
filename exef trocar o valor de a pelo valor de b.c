#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c ;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    c=a;
    a=b;
    b=c;
    printf("A: %.1f\n", a);
    printf("B: %.1f\n", b);
    system("PAUSE");

}

