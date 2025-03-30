#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    
    int num;
    double harm = 1;
    
    printf("Digite um número para obter seu harmônico: ");
    scanf("%d",&num);
    
    for(int cont = 2; cont <= num; cont++){
        harm += 1.0/cont;
    }
    
    printf("Harmônico: %.2lf",harm);
    
    return 0;
}
