#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d,e;
    while(1){
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    printf("digite o valor de c: ");
    scanf("%d",&c);
    printf("digite o valor de d: ");
    scanf("%d",&d);
    printf("digite o valor de e: ");
    scanf("%d",&e);
    if(a>b&&a>c&&a>d&&a>e){
            printf("\nA � o maior numero: %d\n",a);
    }
    if(b>a&&b>c&&b>d&&b>e){
            printf("\nB � o maior numero: %d\n",b);
    }
    if(c>a&&c>b&&c>d&&c>e){
            printf("\nc � o maior numero: %d\n",c);
    }
    if(d>a&&d>b&&d>c&&d>e){
            printf("\nD � o maior numero: %d\n",d);
    }
    if(e>a&&e>b&&e>c&&e>d){
            printf("\nE � o maior numero: %d\n",e);

    }
    if(a<b&&a<c&&a<d&&a<e){
            printf("A � o menor numero: %d\n\n",a);
    }
    if(b<a&&b<c&&b<d&&b<e){
            printf("B � o menor numero: %d\n\n",b);
    }
    if(c<a&&c<b&&c<d&&c<e){
            printf("c � o menor numero: %d\n\n",c);
    }
    if(d<a&&d<b&&d<c&&d<e){
            printf("D � o menor numero: %d\n\n",d);
    }
    if(e<a&&e<b&&e<c&&e<d){
            printf("E � o menor numero: %d\n\n",e);

    }
    }

    system("pause");
}
