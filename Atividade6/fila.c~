#include <stdio.h>
#include "fila.h"

void inicializa(Fila *f){
f->inicio=0;
f->fim=-1;
}

void insere(Fila *f, int elem){

	if (f->fim == TAMANHO - 1){ 
		printf ("Fila cheia! \n");
	}	

	else {
	f->fila[f->fim]=elem;
        f->fim++;
		
	}
}

void retira (Fila *f){	
	if (f->inicio > f->fim){
		printf ("Fila ainda vazia!\n");
	}
	
	else {
	f->inicio++;	
	}
}

void retira_todos(Fila *f){
   
   if (f->fim == TAMANHO - 1){ 
    for(i=0;i=
void imprimefila (Fila *f){
	if (f->fim < f->inicio){
		printf ("Fila vazia!\n");
	}
	else{
		for (i=0;i<f->fim-1;i++){
		printf ("%d",f->fila[i]);		
		}
	}




