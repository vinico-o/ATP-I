#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    int CQ = 7, BS = 5, HA = 10, CH = 12, RE = 3;
    int qntd, codigo, item, cont=0, parcial, final;

    printf("Informe quantidade de itens deste pedido: ");
    scanf("%d",&item);

    while(cont < item){
        printf("Código do item %d:",cont+1);
        scanf("%d",&codigo);

        switch(codigo){
        case 100:
            parcial = CQ * qnt;
            printf("Valor parcial: %d", parcial);
            break;
        case 101:
            parcial = BS * qnt;
            printf("Valor parcial: %d", parcial);
            break;
        case 102:
            parcial = HA * qnt;
            printf("Valor parcial: %d", parcial);
            break;
        case 103:
            parcial = CH * qnt;
            printf("Valor parcial: %d", parcial);
            break;
        case 104:
            parcial = RE * qnt;
            printf("Valor parcial: %d", parcial);
            break;
        default:
            printf("Código inválido");
    }
        final += parcial;
    }
    
    printf("Valor final: ",final);
return 0;
}