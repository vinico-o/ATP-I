#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número de 1 a 7: ");
    scanf("%d",&numero);

    switch(numero){
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terça");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sábado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Número inválido");
        }

    return 0;
}
