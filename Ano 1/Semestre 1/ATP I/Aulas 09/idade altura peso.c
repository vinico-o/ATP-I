#include<stdio.h>
#include<locale.h>

int main() {
setlocale(LC_ALL, "portuguese");

    int idade, qntd;
    float peso, altura;
    
    int sup50=0,sup10_20=0, pmenor50=0;

    int cont=0;
    float soma=0;

    printf("Digite o número de pessoas: ");
    scanf("%d",&qntd);

    while(cont < qntd){
        cont++;

        printf("Digite idade, peso e altura: ");
        scanf("%d %f %f", &idade, &peso, &altura);

        if(idade > 50){
            sup50++;
        }
        if(idade >= 10 && idade <= 20){
            soma += altura;
            sup10_20++;
        }
        if(peso < 50){
            pmenor50++;
        }

        fflush(stdin);

    }

    if(sup10_20 == 0){
        sup10_20 = 1;
    }

    printf("\nNúmero de pessoas maiores de 50 anos: %d",sup50);
    printf("\nmédia de altura entre 10 e 20 anos: %.2f", (soma / sup10_20));
    printf("\nNúmero de pessoas com peso menor que 50: %d",pmenor50);

return 0;
}