#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale (LC_ALL,"");
    
    int senha, senhaReal = 1234;
    int codigo, codigoReal = 5678;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

	printf("Digite seu codigo: ");
    scanf("%d", &codigo);
	
    while(senha != senhaReal || codigo != codigoReal){
        printf("\nInformações Incorretas!\n");
        printf("\nDigite sua senha: ");
        scanf("%d", &senha);
        printf("\nDigite seu codigo: ");
        scanf("%d", &codigo);
    }

    printf("\nInformações Corretas!\n");
}
