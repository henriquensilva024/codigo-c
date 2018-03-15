#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    float sm,pr,a,ns;
    printf("informe o salario mensal atual: ");
    scanf("%f",&sm);
    printf("informe o percentual do reajuste : ");
    scanf("%f",&pr);
    a=(sm*pr)/100;
    ns=sm+a;
    printf("o valor do novo salario sera : %.2f\n",ns);
    system("pause");
}
