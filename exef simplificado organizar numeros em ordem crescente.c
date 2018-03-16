#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 main(){
     setlocale(LC_ALL,"portuguese");
     int a,b,c;
     printf("digite o valor de a: ");
     scanf("%d",&a);
     printf("digite o valor de b: ");
     scanf("%d",&b);
     printf("digite o valor de c: ");
     scanf("%d",&c);
     if (a<b&&b<c){
     printf("%d%d%d\n",a,b,c);
     }
     if (b<a&&a<c){
     printf("%d%d%d\n",b,a,c);
     }
     if (c<a&&a<b){
     printf("%d%d%d\n",c,a,b);
     }
     if (a<c&&c<b){
     printf("%d%d%d\n",a,c,b);
     }
     if (b<c&&c<a){
     printf("%d%d%d\n",b,c,a);
     }
     if (c<b&&b<a){
     printf("%d%d%d\n",c,b,a);
     }

                system("pause");
             }



