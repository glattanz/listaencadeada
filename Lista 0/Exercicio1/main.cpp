#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "ascii.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char c;
	
	do{
		c = ascii(c);
		
		printf("\nCaracter correspondente na tabela ASCII: %d\n", c);
		
	}while(c!=27);
	
		printf("\n\nFim de programa, tecla ESC foi pressionada!");
	
}
