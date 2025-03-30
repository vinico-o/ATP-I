#include<stdio.h>
#include<locale.h>

int main(){
 
setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;
    char diac, mesc, anoc;
    
    printf("Digite a data de hoje: ");
    scanf("%d%d%d",&dia,&mes,&ano);

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
        printf("data inválida");
    } else{
        printf("data válida");
    } 

    return 0;
}