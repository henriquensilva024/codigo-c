#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int va,vb,vc,vn,vbr,tv,vv,pv,pvv,pva,pvb,pvc,pvn,pvbr;
    printf("informe a quantidade de votos do candidato a: ");
    scanf("%d",&va);
    printf("informe a quantidade de votos do candidato b: ");
    scanf("%d",&vb);
    printf("informe a quantidade de votos do candidato c: ");
    scanf("%d",&vc);
    printf("informe a quantidade de votos nulos n: ");
    scanf("%d",&vn);
    printf("infoorme a quntidade de votos em branco br: ");
    scanf("%d",&vbr);
    tv=va+vb+vc+vn+vbr;
    vv=va+vb+vc;
    pvv=vv*100/tv;
    pva=va*100/tv;
    pvb=vb*100/tv;
    pvc=vc*100/tv;
    pvn=vn*100/tv;
    pvbr=vbr*100/tv;
    printf("o total de votos �: %d\n",tv);
    printf("o percentual de votos validos �: %d\n",pvv);
    printf("o percentual de votos do candidato a �: %d\n",pva);
    printf("o percentual de votos do candidato b �: %d\n",pvb);
    printf("o percentual de votos do candidato c �: %d\n",pvc);
    printf("o percentual de votos nulos �: %d\n",pvn);
    printf("o percentual de votos brancos �: %d\n",pvbr);
    system("pause");


}
