#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int n1,n2,n3,n4,mf1,mf2,ne;
    printf("digite a nota do 1°bimestre: ");
    scanf("%d",&n1);
    printf("digite a nota do 2°bimestre: ");
    scanf("%d",&n2);
    printf("digite a nota do 3°bimestre: ");
    scanf("%d",&n3);
    printf("digite a nota do 4°bimestre: ");
    scanf("%d",&n4);
    mf1=(n1+n2+n3+n4)/4;

    if(mf1>=7){
        printf("aprovado media: %d\n",mf1);
    }
    else if(mf1<7){
        printf("digite a nota de exame do aluno: ");
        scanf("%d",&ne);
        mf2=(mf1+ne)/2;
        if(mf2>=5){
        printf("aprovado em exame media: %d\n",mf2);
        }
        else{
        printf("reprovado media: %d\n",mf2);
        }
    }
    system("pause");
}
