#include<stdio.h>
#include<locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

    int num, qntd, cont=0, soma=0;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&qntd);

    while(cont < qntd){

        printf("Digite a nota do %d° aluno: ",cont+1);
        scanf("%d",&num);

        cont++;

        if(num <=10 || num >=0){
            soma += num;
        } else {
            printf("Número fora do intervalo");
        }
    }

printf("\nA média é: %.2f",soma/(float)qntd);

return 0;

}
