#include <stdio.h>
<<<<<<< HEAD
=======
<<<<<<< HEAD
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
 
=======
>>>>>>> 5b07fd5777ba85b9a5750cfdca6914bbbfdd0f6b
#include <stdlib.h>
#include "pilha.h"

void inicializa(Pilha *p)
{
	p -> topo = -1;
}

void insere(Pilha *p, int elemP)
{
	p -> topo = p -> topo + 1;
	p -> topo = elemP;
}

void retira(Pilha *p)
{

}

void imprime_topo(Pilha *p)
{

}

<<<<<<< HEAD
=======
>>>>>>> f28f0703fc6b53c9fb3372b875fed7b3483aa9b4
>>>>>>> 5b07fd5777ba85b9a5750cfdca6914bbbfdd0f6b
