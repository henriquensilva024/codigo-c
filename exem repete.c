#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

   main(){
setlocale(LC_ALL,"portuguese");
char nome[10],sexo[10];
while(1){
printf("digite o nome da criatura: ");
gets(nome);
printf("\ndigite o sexo da criatura: ");
gets(sexo);
if (sexo[0] == 'm'){
printf("\n %s é macho!\n\n",nome);


}else{
printf("\n%s é femea!\n\n",nome);


}
system("pause");
system("cls");
}
}
