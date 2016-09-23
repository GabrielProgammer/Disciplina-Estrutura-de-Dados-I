#include <stdio.h>
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
 
 }
 
