#include<stdio.h>

int main () {

//declara��o de vari�veis
int numero, r1, r2, r3, inv;

//entada do n�mero escolhido
printf("digite um numero: ");
scanf("%d",&numero);

//condi��o para realizar a opera��o
if (numero < 100 || numero > 999) {
    printf("numero incompativel");
}

// opera��o
else {

 r1 = numero / 100;
 r2 = (numero % 100) / 10;
 r3 = (numero % 100) % 10;

 inv = (r3 * 100) + (r2 * 10) + r1;

// sa�da da opera��o
printf("numero gerado: %d",inv);
printf("\nnumero gerado: %d%d%d", r3,r2,r1);
}
 return 0;

}
