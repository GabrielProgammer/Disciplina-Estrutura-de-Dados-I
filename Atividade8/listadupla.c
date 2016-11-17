
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
