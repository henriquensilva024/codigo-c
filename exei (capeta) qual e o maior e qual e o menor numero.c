#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,d,e;
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
    if(a>b){
        if(a>c){

            if(a>d){
                if(a>e){
                    printf("a é o maior numero: %d\n",a);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d é o maior numero: %d\n",d);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }


        }else{
            if(c>d){
                if(c>e){
                    printf("c é o maior numero: %d\n",c);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d é o maior numero: %d\n",d);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }
        }
    }else{
        if(b>c){
            if(b>d){
                if(b>e){
                    printf("b é o maior numero: %d\n",b);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d é o maior numero: %d\n",d);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }
        }else{
            if(c>d){
                if(c>e){
                        printf("c é o maior numero: %d\n",c);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }else{

                if(d>e){
                    printf("d é o maior numero: %d\n",d);
                }else{
                    printf("e é o maior numero: %d\n",e);
                }
            }
        }
    }

    if(a<b){
        if(a<c){

            if(a<d){
                if(a<e){
                    printf("a é o menor numero: %d\n",a);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d é o menor numero: %d\n",d);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }


        }else{
            if(c<d){
                if(c<e){
                    printf("c é o menor numero: %d\n",c);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d é o menor numero: %d\n",d);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }
        }
    }else{
        if(b<c){
            if(b<d){
                if(b<e){
                    printf("b é o menor numero: %d\n",b);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d é o menor numero: %d\n",d);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }
        }else{
            if(c<d){
                if(c<e){
                        printf("c é o menor numero: %d\n",c);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }else{

                if(d<e){
                    printf("d é o menor numero: %d\n",d);
                }else{
                    printf("e é o menor numero: %d\n",e);
                }
            }
        }
    }
    system("pause");
}
