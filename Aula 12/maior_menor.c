#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "porgutese");

    int num, maior, menor;

    printf("Digite uma sequencia de números, o programa dirá quem é o menor e o maior\n");
    printf("Digite 0 para encerrar o programa\n");

    printf("digite o 1° número: "); 
    scanf("%d",&num);

    maior = num;
    menor = num;

    for(int cont = 1; num != 0; cont++ ){
        printf("digite o %d° número: ",cont + 1);
        scanf("%d",&num);

        if(maior < num){
            maior = num;
        }
        if(menor > num){
            menor = num;
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n",menor);

    return 0;
}