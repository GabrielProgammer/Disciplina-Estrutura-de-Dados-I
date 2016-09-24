 /*#include <stdio.h>
 #include <stdlib.h>
 #include "pilha.h"
 
 void inicializa(Pilha *p)
 {
 	p->inicio= NULL ;
 	p->topo=0;
 }
 
 void insere(Pilha *p, int elemP)
 {
 	p -> topo = p -> topo + 1;
 	p -> topo = elemP;
 }
 
 void retira(Pilha *p)
 {
 	p -> topo = p -> topo - 1;
 	p -> topo = elemP;
 }
	
 
 void imprime_topo(Pilha *p)
 {
 
 }*/
 
// Gabriel

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

void inicializa(Pilha *p)
{
	p -> topo = -1;
}

void insere(Pilha *p, int elementoP)
{
	p -> topo = p -> topo + 1;
	p -> pilha[p->topo] = elementoP;
}

void retira(Pilha *p)
{
	p -> topo = p -> topo - 1;
}

void imprime_topo(Pilha *p)
{
	printf("\n\nImprimindo topo...\n");
	printf("%d", p->pilha[p->topo]);
}

