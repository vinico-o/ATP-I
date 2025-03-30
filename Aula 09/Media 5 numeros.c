#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "portuguese");

    int num, cont=0, soma=0;

    while(cont < 5){
        printf("Digite o %d° numero: ",cont+1);
        scanf("%d",&num);

        soma = soma + num;
        cont++;
    }
printf("Soma: %d",soma);
return 0;
}
