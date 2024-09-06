#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    int codigo;

    printf("Digite o código do produto: ");
    scanf("%d",&codigo);

    switch(codigo){
        case 1:
            printf("Alimento não perecível");
            break;
        case 2: case 3: case 4:
            printf("Alimento perecível");
            break;
        case 5: case 6:
            printf("Vestuário");
            break;
        case 7:
            printf("Higiene pessoal");
            break;
        case 8 ... 15:
            printf("Limpeza e Utensílios domésticos");
            break;
        default:
            printf("Código inválido");
            break;
    }

    return 0;
}