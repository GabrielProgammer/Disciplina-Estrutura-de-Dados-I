
#include <stdio.h>
#include <stdlib.h>
#include "listadupla.h"


Lista* criaLista(){
    return NULL;
}

Lista * insere(Lista *l, int x){
    Lista * novono = (Lista *) malloc(sizeof(Lista));
    if(l!=NULL) l->ant = novono;
    novono->dado = x;
    novono->prox = l;
    novono->ant = NULL;
    return novono;
}

void imprime(Lista *l){
    Lista *aux;
    for(aux = l;aux !=NULL; aux=aux->prox)
        printf("%d  ",aux->dado);
printf("\n");
}

Lista* buscaElemento(Lista* l, int valor)
{
 Lista* p;
 for (p=l; p!=NULL; p=p->prox)
 if (p->dado == valor)
 return p;
 return NULL; /* não achou o elemento */
}
Lista * retira (Lista* l, int valor)
{
 Lista* p = buscaElemento(l,valor);
 if (p == NULL)
 return l;/* não achou o elemento: retorna lista inalterada */

 if (p == l) /* testa se é o primeiro elemento */
 l = p->prox;
 else
 p->ant->prox = p->prox;
 if (p->prox != NULL) /* testa se é o último elemento */
 p->prox->ant = p->ant;
 free(p);
 return l;
}
void imprimeInvertido(Lista* l)
{
	
    if(vazia(l))

         printf("\nlista esta vazia.\n\n");

     else{
         while(l->prox != NULL) 

             l = l->prox;   
              

         printf("\nA lista inversa eh:\n\n");

         while(l != NULL){
             printf(" %d", l->dado);

             l = l->ant;

         }

}
}

int vazia(Lista *l){
	return l == NULL;
}
