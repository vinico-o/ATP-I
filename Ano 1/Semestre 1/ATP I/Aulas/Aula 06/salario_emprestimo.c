#include<stdio.h>

int main (){
        float salario, emprestimo;

        printf("Digite o valor do salario: ");
        scanf("%f",&salario);

        printf("Digite o valor do emprestimo: ");
        scanf("%f",&emprestimo);

        if(emprestimo > (salario + salario *0.2)) {
            printf("Emprestimo nao concedido");
        }

        else {
            printf("Emprestimo concedido");
        }
        return 0;
    }
