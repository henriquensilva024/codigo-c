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
     if (a>b){
     if(b>c){
     printf("%d%d%d\n",c,b,a);
     }
     else{
         if (a>c){
            printf("%d%d%d\n",b,c,a);
         }
         else{
             printf("%d%d%d\n",b,a,c);
         }
     }
     }
         else{
             if(b>c){
                if(a>c){
                     printf("%d%d%d\n",c,a,b);
                }
                else{
                    printf("%d%d%d\n",a,c,b);
                }
             }
        else{
        printf("%d%d%d\n",a,b,c);
        }
         }
                system("pause");
             }



