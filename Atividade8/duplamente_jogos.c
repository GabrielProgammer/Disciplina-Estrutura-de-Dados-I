#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "duplamente_jogos.h"
#define TAM 50

Game* cria()
{
	return NULL;
}

Game* insere(Game *p, char nomeG[TAM], int anoG)
{
	Game *novono =(Game *) malloc(sizeof(Game));
	
	if(p!=NULL) p->ant = novono;
		strcpy(novono->nome, nomeG);

	novono -> ano = anoG;
    novono->prox = p;
    novono->ant = NULL;
    return novono;
}

void lista_elementos(Game *p)
{
	Game *aux;

for(aux = p;aux !=NULL; aux=aux->prox)
	printf("Nome = %s, Ano: %d\n ", aux->nome, aux->ano);
}

Game*busca(Game *p, char nomeG[TAM])
{
	Game* aux;
	
	for (aux=p; aux!=NULL; aux=aux->prox)
		if (!strcmp(nomeG, aux->nome))
 			return aux;

	return NULL; /* não achou o elemento */
}

Game*retira(Game *p, char nomeG[TAM])
{
	Game* aux = busca(p,nomeG);
	if (aux == NULL)
 		return p;/* não achou o elemento: retorna lista inalterada */

	if (aux == p) /* testa se é o primeiro elemento */
		p = aux->prox;

	else
 		aux->ant->prox = aux->prox;
 	
 	if (aux->prox != NULL) /* testa se é o último elemento */
 		aux->prox->ant = aux->ant;
 
 	free(aux);
	return p;
}

