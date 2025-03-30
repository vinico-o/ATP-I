#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("Digite o ano: ");
    scanf("%d",&ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
        printf("O ano � bissexto");
        ano = 'bissexto';
    }else{
        printf("Ano n�o � bissexto");
        }
}
