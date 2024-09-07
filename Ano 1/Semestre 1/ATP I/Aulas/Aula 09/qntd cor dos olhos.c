#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    printf("\nA� azul, P� Preto, V� verde, C� castanho, O- outros\n");

    int cont=0, qntd;
    int a=0, p=0, v=0, c=0, o=0;
    char cor;

    printf("Digite o n�mero de pessoas: ");
    scanf("%d",&qntd);

    fflush(stdin);

    while(cont < qntd){

        cont++; 

        printf("Cor dos olhos: ");
        scanf("%c",&cor);

        fflush(stdin);


        switch(cor){
        case 'a':
            a++;
            break;
        case 'p':
            p++;
            break;
        case 'v':
            v++;
            break;
        case 'c':
            c++;
            break;
        case 'o':
            o++;
            break;
        default:
            printf("Cor n�o v�lida");
            break;
        }
    }
printf("\nH� %d pessoas de olhos azuis",a);
printf("\nH� %d pessoas de olhos pretos",p);
printf("\nH� %d pessoas de olhos verdes",v);
printf("\nH� %d pessoas de olhos castanhos",c);
printf("\nH� %d pessoas de olhos com outra colora��o",o);
}
