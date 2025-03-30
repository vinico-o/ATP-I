#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "portuguese");

    int Nlinha;
    int cont = 1;

    printf("Escolha o número de linhas: ");
    scanf("%d",&Nlinha);
    
    for(int linha = 0; linha < Nlinha; linha++){
        for(int num = 1; num <= linha; num++){
            printf("%d ",cont);
            cont++;
        }
        printf("\n");
    }
    

}