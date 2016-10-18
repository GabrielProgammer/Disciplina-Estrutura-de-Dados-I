#include <stdio.h>
#include "filaamanda.h"

void inicializa (Fila *f){
f->inicio=0;
f->fim=-1;
}

void insere (Fila *p, int elem){
              p->fim++;

	if (p->fim == TAM - 1){ 
		printf ("Fila está cheia!! \n");
	}	

	else {
	p->fila[p->fim]=elem;
		
	}

}

void retira (Fila *p){
	
	if (p->fim < p->inicio){
		printf ("Fila está vazia!!\n");
	}
	
	else {
	p->inicio++;	
	}
}

void imprimefila (Fila *f){
	if (p->fim < p->inicio){
		printf ("Fila está vazia!!\n");
	}
	else{
		for (i=0; i<p->fim-1;i++){
		printf (" - %d ", p->fila[i]);		
		}
	}
}
