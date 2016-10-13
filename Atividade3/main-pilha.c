#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
Pilha p, *a = &p;
 	inicializa(a);
 	insere(a, 1);
 	retira(a);
 	insere(a, 14);
 	insere(a, 5);
 	insere(a, 21);
 	imprime_topo(a);
 	insere(a, 4);
 	insere(a, 7);
 	insere(a, 8);
 	insere(a, 11);
 	insere(a, 40);
 	imprime_topo(a);
	
 	imprime_multiplo7(a);
 	imprime_pilha(a);
 	retira(a);
 	retira(a);
 	imprime_topo(a);
 
 
 	imprime_pilha(a);
 	imprime_multiplo7(a);


inverte(a);
imprime_pilha(a);

 	

 	



}

