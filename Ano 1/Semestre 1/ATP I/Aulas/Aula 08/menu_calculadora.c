#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
setlocale (LC_ALL, "Portuguese");

    int n1, n2, escolha;

    printf("Digite dois n�meros: ");
    scanf("%d%d",&n1,&n2);

    printf("MENU - digite a op��o\n 1- Soma\n 2- Subtra��o\n 3- Multiplicar\n 4- Dividir\n 5- Sair\n\n");

    printf("escolha: ");
    scanf("%d",&escolha);

    switch(escolha){
    case 1:
        printf("resultado: %d",n1 + n2);
        break;
    case 2:
        printf("resultado: %d",n1 - n2);
        break;
    case 3:
        printf("resultado: %d",n1 * n2);
        break;
    case 4:
        printf("resultado: %d",n1 / n2);
        break;
    case 5:
        printf("Programa Encerrado");
        exit(0);
        break;
    default:
        printf("Escolha Inv�lida");
               }

return 0;
}
