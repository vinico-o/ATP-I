#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main (){
setlocale (LC_ALL, "Portuguese");

    char resp1, resp2, gosto;

    printf("Responda �s perguntas utilizando apenas uma vez com cada uma das respostas seguintes: \nsim ou nao\n");

    printf("Voc� � gay? ");
    scanf(" %c",&resp1);

fflush(stdin);

    printf("Voc� est� mentindo? ");
    scanf(" %c",&resp2);

fflush(stdin);

    if (resp1 == resp2) {
        printf("N�o trapaceie.");
    } else {
    printf("Voc� � gay.");
    }

fflush(stdin);
    
    printf("\ngostou? ");
    scanf(" %c",&gosto);
}