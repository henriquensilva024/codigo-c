#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");

    float a;
    float b;
    float c;
    float d;
    float sab;
    float sac;
    float sad;
    float sbc;
    float sbd;
    float scd;
    float mab;
    float mac;
    float mad;
    float mbc;
    float mbd;
    float mcd;

    printf("digite o valor de a: ");
    scanf("%f" ,&a);
    printf("digite o valor de b: ");
    scanf("%f",&b);
    printf("digite o valor de c: ");
    scanf("%f",&c);
    printf("digite o valor de d: ");
     scanf("%f",&d);

    sab=a+b;
    sac=a+c;
    sad=a+d;
    sbc=b+c;
    sbd=b+d;
    scd=c+d;
    mab=a*b;
    mac=a*c;
    mad=a*d;
    mbc=b*c;
    mbd=b*d;
    mcd=c*d;

    printf("a soma de a e b �: %.1f\n" ,sab);
    printf("a soma de a e c �: %.1f\n" ,sac);
    printf("a soma de a e d �: %.1f\n" ,sad);
    printf("a soma de b e c �: %.1f\n" ,sbc);
    printf("a soma de b e d �: %.1f\n" ,sbd);
    printf("a soma de c e d �: %.1f\n" ,scd);
    printf("a multiplica�ao de a e b �: %.1f\n" ,mab);
    printf("a multiplica�ao de a e c �: %.1f\n" ,mac);
    printf("a multiplica�ao de a e d �: %.1f\n" ,mad);
    printf("a multiplica�ao de b e c �: %.1f\n" ,mbc);
    printf("a multiplica�ao de b e d �: %.1f\n" ,mbd);
    printf("a multiplica�ao de c e d �: %.1f\n" ,mcd);

    system("pause");





}
