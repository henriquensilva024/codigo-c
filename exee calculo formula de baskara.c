#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    float a,b,c,d,x1,x2;
    printf("digite o valor de a: ");
    scanf("%f",&a);
    printf("digite o valor de b: ");
    scanf("%f",&b);
    printf("digite o valor de c: ");
    scanf("%f",&c);
    if (a!=0){
        d=pow(b,2)-4*a*c;
        if(d==0){
            x1=(-b+sqrt(d))/(2*a);
            printf("delta igual a 0\n");
            printf("x1 e x2= %.2f",x1);

        }else{
            if(d>0){
                x1=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                printf("delta e maior que 0\n");
                printf("x1= %.2f\n",x1);
                printf("x2= %.2f\n",x2);
                }else{
                    printf("delta menor que 0\n");
                    printf("nao existe raiz real!");
                }

             }

            }else{
                printf("nao é uma equaçao do 2°grau\n");
                printf("tem que ser diferente de 0\n");
            }
            system("pause");
}


