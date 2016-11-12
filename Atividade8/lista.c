#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
Lista* cria()
{
    return NULL;
}

Lista* insere(Lista *l, int x)
{
    Lista *novono =(Lista *) malloc(sizeof(Lista));
    novono->dado = x;
    novono->prox = l;
    return novono;
}


void imprime(Lista *l)
{
    Lista *aux;
    for (aux =l; aux!= NULL; aux=aux->prox)
    printf(" dado = %d\n ",  aux->dado);
}

Lista* busca( Lista *l, int x)
{
  Lista* aux;
  	int aux1=0;
	aux=l;
    for ( aux=l; aux!=NULL; aux=aux->prox)
    {
        if (aux->dado == x)
        {
            printf("DADO  %d encontrado\n\n", x);       
            return aux;
        }
    }

	while(aux!=NULL){
		if(aux->dado==x){
			printf("DADO %d encontrado\n",x);
			aux1=1;
			int b;
			b=aux->dado;
			aux=NULL;
		}
		else{
			aux=aux->prox;
		}
	}
	if(aux1==0){
		printf("DADO buscado nao encontrado!!!!\n");
	}
	free(aux);
return NULL;
}

int vazia(Lista *l)
{
	if(l->prox == NULL)
		return 1;
	else
		return 0;
}

Lista* retira(Lista *l, int valor)
{
Lista *aux;
aux = l;
Lista* a = NULL; 
Lista* p = l; 
int final;
    
    if(busca(aux, valor))
    {
     
 while (p != NULL && p->dado != valor) {
 a = p;
 p = p->prox;
 }

 if (p == NULL)
 return l; /* não achou: retorna lista original */
 /* retira elemento */
 if (a == NULL)
 { /* retira elemento do inicio */
 l = p->prox; }
 else { /* retira elemento do meio da lista */
 a->prox = p->prox; }
 free(p);
 return l;
}

        printf("Nao existe na lista, impossivel remover elemento!\n");  
	   }
     




void inserefinal(Lista *l, int valor)
{
Lista *novono=(Lista *) malloc(sizeof(Lista));
	if(!novono){
		printf("Sem espaco na memoria\n");
		exit(1);
	}
	printf("ensira o novo  Dado no fim da fila: "); 
	scanf("%d", &novono->dado);
	novono->prox = NULL;
	
	if(vazia(l))
		l->prox=novono;
	else{
		Lista *tmp = l->prox;
		
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		
		tmp->prox = novono;
	}
}

