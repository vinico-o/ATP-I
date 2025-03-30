#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    int num,cont=1,maior;

    printf("Digite o 1° número: ");
    scanf("%d",&maior);

    while(cont < 5){

        printf("Digite o %d° numero: ",cont+1);
        scanf("%d",&num);

        cont++;
        if(num > maior){
            maior = num;
        }
    }
printf("O maior número é: %d",maior);
}
