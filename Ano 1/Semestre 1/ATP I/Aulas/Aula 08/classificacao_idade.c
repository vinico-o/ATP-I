#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Digite a idade do competidor: ");
    scanf("%d",&idade);

    switch(idade){
        case 0 ... 4:
            printf("Não pode competir");
            break;
        case 5 ... 7:
            printf("Infantil A");
            break;
        case 8 ... 10:
            printf("Infantil B");
            break;
        case 11 ... 13:
            printf("Juvenil A");
            break;
         case 14 ... 17:
            printf("Juvenil A");
            break;
        default:
            printf("Adulto");
            break;
    }

    return 0;
}