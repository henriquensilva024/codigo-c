#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float gc;
    float gf;

    printf("digite uma temperatura em fahrenheit f°: ");
    scanf("%f",& gf);
    gc=(gf-32)*5/9;
    printf ("a temperatura em celsius é c°: %.1f\n" ,gc);
    system("pause");
}
