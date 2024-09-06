#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    char letra;

    printf("Digite uma letra maíuscula: ");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("Letra Vogal");
        break;
    case 'a' ... 'z':
        printf("DIgite uma letra maiúscula");
        break;
    default:
        printf("Letra Consoante");
        break;
    }

    return 0;
}