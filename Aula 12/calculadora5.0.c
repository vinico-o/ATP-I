#include<stdio.h>
#include<locale.h>

int main(){
setlocale (LC_ALL, "portuguese");

    int esc;
    float num1, num2;

    do {
    printf("MENU\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Sair\n");

    printf("digite a operação acima: ");
    scanf("%d",&esc);
    
    if(esc >0 && esc <= 4){
    
    printf("digite os números: ");
    scanf("%f%f",&num1,&num2);

    switch (esc){
        case 1:
            printf("Resposta: %.2f\n",num1+num2);
            break;
        case 2:
            printf("Resposta: %.2f\n",num1-num2);
            break;
        case 3:
            printf("Resposta: %.2f\n",num1*num2);
            break;
        case 4:
            printf("Resposta: %.2f\n",num1/num2);
            break;
    }
    }

    } while (esc < 5);

    printf("programa encerrado");
}
