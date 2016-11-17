#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogos.h"
#define TAM 50
Game* cria()
{
    return NULL;
}

Game* insere(Game *p, char nomeG[TAM], int anoG)
{
    Game *novono =(Game *) malloc(sizeof(Game));
    strcpy(novono->nome, nomeG);
    novono -> ano = anoG;
    novono->prox = p;
    return novono;
}

void imprime(Game *p)
{
    Game *aux;
    for (aux = p; aux!= NULL; aux=aux->prox)
        printf("Nome = %s, Ano: %d\n ", aux->nome, aux->ano);
}

Game* retira(Game *p, char nomeG[TAM])
{
    Game* a = NULL; /* ponteiro para elemento anterior */
    Game* j = p;
    
    if(busca(p, nomeG))
    {
        while (j != NULL && (strcmp(j->nome, nomeG)))
        {
            a = j;
            j = j->prox;
        }
        
 /* verifica se achou elemento */
    if (j == NULL)
        return p; /* n?o achou: retorna lista original */
        
 /* retira elemento */
    if (a == NULL)
    { /* retira elemento do inicio */
        p = j->prox; 
    }
    
     else 
    { /* retira elemento do meio da lista */
        a->prox = j->prox; 
    }
 
     free(j);
    return p;
}
    else
    {
        printf("O jogo digitado(%s) nao existe na lista!\n\n", nomeG);
    }
}
int vazia(Game *p){
    return (p == NULL);
}
Game* busca(Game *p, char nomeG[TAM])
{
   Game* aux;
  
    for (aux=p; aux!=NULL; aux=aux->prox)
    {
        if (!strcmp(nomeG, aux->nome))
        {
            printf("%s ACHADO NA LISTA\n\n", nomeG);        // SO PRA CONFIRMAR O RETORNO
            return aux;
        }
    }
    
    return NULL;        // CASO NÃO ACHE NA LISTA
}

Game* jogos_recentes(Game *p)
{
 
}


