//pilha.cpp
#include "pilha.h"

void push(int x, pilha* p){ //inclui x no topo da pilha
	//-> acessa a variavel struct através de um ponteiro
	//. acessa a variavel struct estatica
	p->qtd++;		
	if (p->qtd == 0)
	 	p->vet = (int*) malloc(sizeof(int));
	else
		p->vet = (int*) realloc(p->vet, p->qtd);
	
}

int pop(pilha* p){ //retorna x extraída do topo da pilha
	
	int x;
	//! é negação
	if(!isEmpty(p)){
	
		x = p->vet[p->qtd-1];
		p->qtd--;
		if(p->qtd < 1)
			free(p->vet);
		else	
			p->vet = (int*) realloc(p->vet, p->qtd);
	}	else{
			cout << "Stack is empty!\n";
		}
	return x;
	}


int top(){ //retorna x do topo da pilha, sem remove-lo
	
	return x;
}

bool isEmpty(pilha* p){ //true se é pilha não vazia
	
	return p->qtd == 0;
}

int size(pilha* p){ //retorna a quantidade de dados na pilha

	return p->qtd;

}

void print(pilha* p){ //loop no vetor pilha informando cada elemento deste

	is(!isEmpty(p)){
		for(int i=0; i<p->qtd; i++){
			cout << p->vet[i] << " - ";
		}
		cout << end1;
	} else {
		cout << "Stack is empty!\n";
	}
}
