#include<stdio.h>

//programa para verificar aprovação do aluno com base na nota

int main () {
    float n1, n2, media;

    printf("Digite a nota 1: ");
    scanf("%f",&n1);

    printf("Digite a nota 2: ");
    scanf("%f",&n2);

    media = (n1 + n2) / 2;

    if (n1 <= 10 && n2 <= 10) {

        if (media >= 5) {
            printf("Media: %.2f", media);
            printf("\nAprovado");
        }

        else {
            printf("Media: %.2f", media);
            printf("\nReprovado");
        }
    }

    else {
        printf("Notas incorretas");
    }
}
