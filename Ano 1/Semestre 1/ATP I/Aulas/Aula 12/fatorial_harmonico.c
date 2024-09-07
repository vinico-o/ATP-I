#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    
    int num;
    double harm = 1, E = 1;
    
    printf("Digite um número para obter seu harmônico: ");
    scanf("%d",&num);
    
    for(int cont = 2; cont <= num; cont++){
        harm += 1.0/cont;
        
        double fat = 1;
        for(int k = 1; k <= cont; k++){
            fat *= k;
        }
        
        E += 1.0/fat;
    }
    
    printf("Harmônico fatorial: %.3lf",E+1);
    
    return 0;
}
