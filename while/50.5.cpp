#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale (LC_ALL,"");

int valor=50.5;
int i=2;

while (valor < 200.5)
	
	{
		i=i+2;
		valor = valor+i;
		printf("Valor:%d\n", valor);
		i++;

	}


}
