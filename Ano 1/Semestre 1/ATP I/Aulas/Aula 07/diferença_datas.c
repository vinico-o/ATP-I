#include<stdio.h>
#include<locale.h>

int main(){
 
setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano; //data atual
    char diac, mesc, anoc; //valores de validade (em char)

    int dia2, mes2, ano2; //data de nascimento
    char diac2, mesc2, anoc2; //valores de validade (em char)

    printf("Digite a data de hoje: ");//entrada de dados
    scanf("%d%d%d",&dia,&mes,&ano);//leitura de dados

    printf("Digite a data de hnascimento: ");
    scanf("%d%d%d",&dia2,&mes2,&ano2);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){ //definição ano bissexto
        anoc = 'b'; // ano bissexto
    }else{
        anoc = 'n'; // ano não bissexto
        }


if(mes == 4 || mes == 6 || mes == 9 || mes == 11){ // meses que tem 30 dias
    mesc = 'm';
} else{
    mesc = 'M'; // meses com 31 dias
}


    if(mes <= 12 && mes >= 1){ // número de meses
        mesc = 'V';
    } else {
        mesc = 'I';
    }

   if (mesc == 2) {
        if (anoc == 'b' && dia > 29) {
            diac = 'I';
        }else if (anoc == 'n' && dia > 28) {
            diac = 'I';
        }else {
            diac = 'V';
        }
    }else if (mesc == 'm'){
        if (dia > 30){
            diac = 'I';
        } else {
            diac = 'V';
        }
    }else {
        if (dia > 31){
            diac = 'I';
        } else {
            diac = 'V';
        }
    }

    if(diac == 'I' || mesc == 'I'){
        printf("data atual inválida");
    } else{
        printf("\n");
    }

if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){ //definição ano bissexto
        anoc = 'b'; // ano bissexto
    }else{
        anoc = 'n'; // ano não bissexto
        }


if(mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11){ // meses que tem 30 dias
    mesc2 = 'm';
} else{
    mesc2 = 'M'; // meses com 31 dias
}


    if(mes2 <= 12 && mes2 >= 1){ // número de meses
        mesc2 = 'V';
    } else {
        mesc2 = 'I';
    }

   if (mesc2 == 2) {
        if (anoc2 == 'b' && dia2 > 29) {
            diac2 = 'I';
        }else if (anoc2 == 'n' && dia2 > 28) {
            diac2 = 'I';
        }else {
            diac2 = 'V';
        }
    }else if (mesc2 == 'm'){
        if (dia2 > 30){
            diac2 = 'I';
        } else {
            diac2 = 'V';
        }
    }else {
        if (dia2 > 31){
            diac2 = 'I';
        } else {
            diac2 = 'V';
        }
    }

    if(diac2 == 'I' || mesc2 == 'I'){
        printf("data de nascimento inválida");
    } else{
        printf("\n");
    } 

    return 0;


}