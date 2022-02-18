#include <iostream>
#include "calculadora.h"
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout << "Escolha a opção: " << endl;
	cout << "1 - Soma\n";
	cout << "2 - Subtração\n";
	cout << "3 - Multiplicação\n";
	cout << "4 - Divisão\n";
	cout << "5 - Raiz\n";
	cout << "6 - Potência\n";
	cout << "Qualquer número para sair";
	cout << "> \n";
}

float ler_numero(int n){
	int nn(0);
	cout << "Informe o valor " << n << ": ";
	cin >> nn;
	return nn;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	float n1, n2, resultado;
	int op;
	do{
		menu();
		cin >> op;
		switch (op){
			case 1: //soma
				cout << "\nSOMA:\n";
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				resultado = soma (n1, n2);
				cout << "Resultado: " << resultado << endl << endl;			
					break;
			case 2: //subtração
				cout << "\nSUBTRAÇÃO:\n";
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				resultado = subtracao (n1, n2);
				cout << "Resultado: " << resultado << endl << endl;
					break;
			case 3: // multiplicação
				cout << "\nMULTIPLICAÇÃO:\n";
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				resultado = multiplicacao (n1, n2);
				cout << "Resultado: " << resultado << endl << endl;
					break;
			case 4: //divisão
				cout << "\nDIVISÃO:\n";
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				resultado = divisao (n1, n2);
				cout << "Resultado: " << resultado << endl << endl;
					break;
			case 5: //raiz
				cout << "\nRAIZ:\n";
				n1 = ler_numero(1);
				resultado = raiz (n1);
				cout << "Resultado: " << resultado << endl << endl;
					break;
			case 6: //potência
				cout << "\nPOTÊNCIA:\n";
				n1 = ler_numero(1);
				n2 = ler_numero(2);
				resultado = potencia (n1, n2);
				cout << "Resultado: " << resultado << endl << endl;
			default:
					cout << "Fim de programa!\n";
		};
	} while((op<7) && (op>0));
	system ("pause");
	
	
	return 0;
}
