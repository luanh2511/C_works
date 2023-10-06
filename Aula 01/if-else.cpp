#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale (LC_ALL,"");

    int idade;

    printf ("Digite sua idade: ");
    scanf ("\n%d", &idade);

    if ((idade > 20) && (idade < 50))

    {
        printf ("Entrada Permitida\n");
    }

    else if ((idade > 10) && (idade < 19))

    {
        printf ("Entrada Proibida\n");
    }

    else{
        printf("Idade Invalida\n");
    }

    system("pause");
    return(0);

}

