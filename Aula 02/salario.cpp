#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale (LC_ALL,"");

int sal, novo_sal;

printf("Digite o valor do seu salario atual: ");
scanf("\n%d" ,&sal);

if (sal < 500){
	novo_sal = sal + (sal * 20/100);
}

else{
	novo_sal = sal + (sal * 10/100);
}

printf("Seu novo salario é: %d" ,novo_sal);
printf("\n");

system("pause");
return(0);


}
