//cpp funções
//Desenvolver as funções da biblioteca
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h>
#include <locale.h>

 int i=0;
int cadastro(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("Posição [%d] vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
}

int exibir_n(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("%d ",vet[i]);
	}
}

int exibir_i(int *vet, int n){
	for(int i=0;i<n;i++){
		printf("%d ",i+1);
	}
}


int remover(int *vet, int n){
	int n_novo=n-1;
	
	for(int i=0;i<n_novo;i++){
		printf("%d\n",vet[i]);
}
}

int informacao_nome(char *nome, char *end){
	printf("Informe nome: ");
	fflush(stdin);
	gets(nome);
	printf("\nInforme endereço: ");
	gets(end);
	
	
}
