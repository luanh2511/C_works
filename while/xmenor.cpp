#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (void)
{
    setlocale (LC_ALL,"");

int x=1;
int y=5;

while (x < y)
	
	{
		x = x+2;
		y = y+1;
		printf("X=%d Y=%d\n", x, y);

	}


}
