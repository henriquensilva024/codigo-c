#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,n4,mf;
    printf("digite a nota do 1°bimestre: ");
    scanf("%d",&n1);
    printf("digite a nota do 2°bimestre: ");
    scanf("%d",&n2);
    printf("digite a nota do 3°bimestre: ");
    scanf("%d",&n3);
    printf("digite a nota do 4°bimestre: ");
    scanf("%d",&n4);
    mf=(n1+n2+n3+n4)/4;
    if(mf>=5){
        printf("aprovado %d\n",mf);
    }
    else{
        printf("reprovado %d\n",mf);
    }
    system("pause");
}
