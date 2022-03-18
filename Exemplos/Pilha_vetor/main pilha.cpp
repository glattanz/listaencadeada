#include <iostream>
#include "pilha.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	
	cout<<"Stack options:\n";
	cout<<"1 - Push\n"; //inclui valores no vetor
	cout<<"2 - Pop\n";
	cout<<"3 - Top\n";
	cout<<"4 - isEmpty\n";
	cout<<"5 - Size\n";
	cout<<"6 - Print\n";
	cout<<"Other to quit\n";
	cout<<"?\n";
}
int main(int argc, char** argv) {
	
	//reserva uma memória inteira sem sinal que recebe 0
	//declara uma variavel int que recebe 0
	unsigned int op(0);
	pilha p;
	
	do{
		menu();
		cin >> op;
		
		switch (op){
			
			case 1:
				//push
				break;
				
			case 2:
				//pop
				break;
				
			case 3:
				//top
				break;
			
			case 4:
				//isEmpty
				break;
			
			case 5:
				//size
				break;
				
			case 6:
				//print
				break;
				
			else 
				cout<<"Option is not valid!\n"
		
		}
		
	}while(op > 0 && op < 7);
	cout<<"End of Stack Program!";
	return 0;
}
