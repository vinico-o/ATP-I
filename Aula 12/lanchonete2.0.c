#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

    int CQ = 10, BS = 12, BCO = 15, HA = 11, CH = 15, RE = 3;
    int qntd, codigo, item, cont=0, parcial, final;

    printf("Informe quantidade de itens deste pedido: ");
    scanf("%d",&item);

    while(cont < item){
        printf("Código do item %d: ",cont+1);
        scanf("%d",&codigo);
        
        printf("Quantidade do item %d: ",cont+1);
        scanf("%d",&qntd);


        switch(codigo){
        case 100:
            parcial = CQ * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        case 101:
            parcial = BS * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        case 102:
            parcial = BCO * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        case 103:
            parcial = HA * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        case 104:
            parcial = CH * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        case 105:
            parcial = RE * qntd;
            printf("Valor parcial: %d\n", parcial);
            break;
        default:
            printf("Código inválido\n");
    }
        cont ++;
        
        final += parcial;
    }
    
    printf("Valor final: %d\n",final);
return 0;
}