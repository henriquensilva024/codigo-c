#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    printf("digite o valor de c: ");
    scanf("%d",&c);
    printf("digite o valor de d: ");
    scanf("%d",&d);

    if(a%2==0){
            printf(" a é divisivel por 2\n");
        }
     if(b%2==0){
        printf("b é divisivel por 2\n");
    }
    if(c%2==0){
        printf("c é divisivel por 2\n");
    }
    if(d%2==0){
        printf("d é divisivel por 2\n");
    }
    if(a%3==0){
            printf(" a é divisivel por 3\n");
        }
     if(b%3==0){
        printf("b é divisivel por 3\n");
    }
    if(c%3==0){
        printf("c é divisivel por 3\n");
    }
    if(d%3==0){
        printf("d é divisivel por 3\n");
    }
    system("pause");
}

