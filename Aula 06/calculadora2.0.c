#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");
    float num1, num2;
    char operacao;

    printf("Digite a opera��o: ");

    scanf("%f%c%f",&num1,&operacao,&num2);

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

return 0;
}
