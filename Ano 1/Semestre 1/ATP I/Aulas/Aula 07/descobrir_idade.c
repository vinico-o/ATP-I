#include<stdio.h>
#include<locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");

    int dia, mes, ano, dia_n, mes_n, ano_n, dif_d, dif_m, dif_a;

    printf("Digite a data completa de nascimento: ");
    scanf("%d%d%d",&dia_n,&mes_n,&ano_n);

    printf("Digite a data completa de hoje: ");
    scanf("%d%d%d",&dia,&mes,&ano);

    if(mes % 2 == 0){
        mes = (30 * mes) + mes / 2;
    } else{
    mes = (mes * 30) + mes / 2 + mes % 2;}

    printf("Idade: %d dias %d meses %d anos", (dia - dia_n), (mes - mes_n), (ano - ano_n));
}
