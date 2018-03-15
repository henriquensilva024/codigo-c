#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("digite o numero: ");
    scanf("%d",&n);
    if(n<=0){
        printf("%d\n",n*-1);
        }
    else{
        printf("%d\n",n);

    }
    system("pause");

}

