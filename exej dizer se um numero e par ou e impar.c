#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int n;
    printf("digite um numero n: ");
    scanf("%d",&n);
    if(n%2==0){
        printf (" %d é par\n",n);
    }else{
        printf(" %d é impar\n",n);
    }
    system("pause");
}
