#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

 int main(){
     setlocale(LC_ALL,"portuguese");
     float gc;
     float gf;
     printf("digite uma temperatura em celsius c°: ");
     scanf("%f",& gc);
     gf=((gc*9+160)/5);
     printf("a temperatura em fahrenheit é F°: %.f\n"  ,gf);
     system("pause");


 }
