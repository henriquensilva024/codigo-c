#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    float a,b,c;
    printf("digite a medida de a: ");
    scanf("%f",&a);
    printf("digite a medida de b: ");
    scanf("%f",&b);
    printf("digite a medida de c: ");
    scanf("%f",&c);

    if(a<b+c&&b<a+c&&c<a+b){
        if(a==b&&b==c){
                printf("� um triangulo equilatero\n");

        }else {
           if (a==b||a==c||c==b){
                    printf("� um triangulo isosceles\n");

            }else{
                printf("� um triangulo escaleno\n");
            }
        }
    }else{
        printf("nao � um triangulo\n");
    }



 system("pause");


}

