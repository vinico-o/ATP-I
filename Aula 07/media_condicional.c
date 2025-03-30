#include<stdio.h>
#include<locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

    float media_trab, media_prova;

    printf("Digite a media de trabalho: ");
    scanf("%f",&media_trab);

    printf("Digite a media de prova: ");
    scanf("%f",&media_prova);

    if(media_prova >= 5 && media_trab >= 5){
        printf("A média final é: %.2f", (media_prova + media_trab) / 2);
    }else{
        if(media_prova >= media_trab){
            printf("A média é: %.2f",media_trab);
        }else{
        printf("A média é: %.2f", media_prova);
        }
    }
}
