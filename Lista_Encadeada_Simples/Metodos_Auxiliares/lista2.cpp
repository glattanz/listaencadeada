//.cpp
#include <iostream>
#include "lista.h"

Lista* inicializa (void)
{
	//retorna NULL pq a lista ta vazia
	return NULL;
}

Lista* insereFim (Lista* l, int i)
{
	//aloca um endereço pro novo nó de dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	
	//Guarda o valor passado no nó de dado
	novo->info = i;
	
	//Passa o ponteiro pro final da fila
	novo->prox = l;
	
	//Retorna o nó de dado
	return novo;
}

void imprime (Lista* l)
{
	Lista* p; /* variável auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
	printf(“info = %d\n”, p->info);
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (Lista* l)
{
 if (l == NULL)
 return 1;
 else
 return 0;
}

/* função busca: busca um elemento na lista */
Lista* ocorrencias (Lista* l, int v)
{
 Lista* p;
 for (p=l; p!=NULL; p=p->prox)
 if (p->info == v){
 	int oc++;
 	return oc;
 }
 
 return NULL; /* não achou o elemento */
}

/* função retira: retira elemento da lista */
Lista* removeInicio (Lista* l, int v) {
	
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	
	// ant == NULL: significa q é o primeiro elemento da lista 
	if (ant == NULL) {
	/* retira elemento do inicio */
	//l é prim
	l = p->prox;
	}
	free(p);
	return l;
}

Lista* removeInicio (Lista* l, int v) {
	
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	
	if (p->prox == NULL) {
	/* retira elemento do inicio */

	p->prox = NULL;
	}
	free(p);
	return l;
}

int tamanho(Lista* l){
	
	for (p = l; p != NULL; p = p->prox)
	int q++;
	
	return q;
}

