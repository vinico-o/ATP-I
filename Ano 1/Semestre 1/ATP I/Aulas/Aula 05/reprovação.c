#include<stdio.h>
int main () {

float n1, n2, media;

printf("Digite o valor da nota 1: ");
scanf("%f",&n1);

printf("Digite o valor da nota 2: ");
scanf("%f",&n2);

media = (n1 + n2) / 2;

if (n1 < 10 || n2 < 10) {

        if (media < 3) {
    printf("reprovado");
}

else {
    if(media < 5) {
        printf("exame");

    }
        else {
            printf("aprovado");

    }
}
}

else {
    if(n1 > 10) {
        printf("digite certo a nota 1");
    }
    else {
        printf("digite certo a nota 2");
        }

}

return 0;
}
