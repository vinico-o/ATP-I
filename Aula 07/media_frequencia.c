#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "portuguese");

    float media, freq;

    printf("Digite a M�dia: ");
    scanf("%f",&media);

    printf("Digite a frequ�ncia: ");
    scanf("%f",&freq);

    if(media > 5 && freq > 60){
        printf("Aluno APROVADO");
    }else{
        if(media >= 3 && media <=5 && freq > 60){
        printf("Aluno de EXAME");
    }       else{
            printf("Aluno REPROVADO");
    }

    return 0;
}
}
