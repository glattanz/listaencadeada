#include <stdio.h>
#include <iostream>
#include <conio.h>

int ascii(char c)
{
	printf("Digite um caracter: ");
	c = getch();
	printf("%c", c);
	return c;
}
