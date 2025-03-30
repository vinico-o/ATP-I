#include<stdio.h>

    int main (){
        float num1, num2;
        char operacao;

        printf("digite o numero 1: ");
        scanf("%d",&num1);

        printf("digite o numero 2: ");
        scanf("%d",&num2);

        //limpeza da entrada padrao (enter)
        fflush(stdin);

        printf("digite a operacao: ");
        scanf("%c",&operacao);

        if(operacao == '+'){
            printf("resultado: %.2f",num1 + num2);
        }
        else{
            if(operacao == '-'){
                printf("resultado: %.2f",num1 - num2);
            }
            else{
                if(operacao == '*'){
                    printf("resultado: %.2f",num1 * num2);
                }
                else{
                    if(operacao == '/'){
                        printf("resultado: %.2f",num1 / num2);
                    }
                    else{
                        printf("Operacao nao identificada");
                    }
                }
            }
        }
    }
