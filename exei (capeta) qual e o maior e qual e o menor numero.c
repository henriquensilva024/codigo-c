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
                    printf("a � o maior numero: %d\n",a);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d � o maior numero: %d\n",d);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }


        }else{
            if(c>d){
                if(c>e){
                    printf("c � o maior numero: %d\n",c);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d � o maior numero: %d\n",d);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }
        }
    }else{
        if(b>c){
            if(b>d){
                if(b>e){
                    printf("b � o maior numero: %d\n",b);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }else{
                if(d>e){
                    printf("d � o maior numero: %d\n",d);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }
        }else{
            if(c>d){
                if(c>e){
                        printf("c � o maior numero: %d\n",c);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }else{

                if(d>e){
                    printf("d � o maior numero: %d\n",d);
                }else{
                    printf("e � o maior numero: %d\n",e);
                }
            }
        }
    }

    if(a<b){
        if(a<c){

            if(a<d){
                if(a<e){
                    printf("a � o menor numero: %d\n",a);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d � o menor numero: %d\n",d);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }


        }else{
            if(c<d){
                if(c<e){
                    printf("c � o menor numero: %d\n",c);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d � o menor numero: %d\n",d);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }
        }
    }else{
        if(b<c){
            if(b<d){
                if(b<e){
                    printf("b � o menor numero: %d\n",b);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }else{
                if(d<e){
                    printf("d � o menor numero: %d\n",d);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }
        }else{
            if(c<d){
                if(c<e){
                        printf("c � o menor numero: %d\n",c);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }else{

                if(d<e){
                    printf("d � o menor numero: %d\n",d);
                }else{
                    printf("e � o menor numero: %d\n",e);
                }
            }
        }
    }
    system("pause");
}
