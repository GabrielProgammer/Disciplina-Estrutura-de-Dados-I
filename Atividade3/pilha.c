<<<<<<< HEAD
#include <stdio.h>
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
 /*#include <stdio.h>
>>>>>>> 935aa7eb85b56a54e2596ef7047f35167b7be39b
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
 
<<<<<<< HEAD
=======
>>>>>>> 5b07fd5777ba85b9a5750cfdca6914bbbfdd0f6b
=======
// Gabriel

>>>>>>> 935aa7eb85b56a54e2596ef7047f35167b7be39b
#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

void inicializa(Pilha *p)
{
	p -> topo = -1;
}

void insere(Pilha *p, int elementoP)
{
	if (p -> topo == TAMANHO - 1)		// Este IF verifica se a pilha está cheia
		printf("\nPILHA CHEIA! Impossivel inserir elemento;\n");
	
	else
	{
		p -> topo = p -> topo + 1;
		p -> pilha[p->topo] = elementoP;
	}
	
}

void retira(Pilha *p)
{
	if (p -> topo == -1)		// Este IF verifica se a pilha está vazia
		printf("\nPILHA VAZIA! Impossivel retirar elemento;\n");

	else
		p -> topo = p -> topo - 1;
}

void imprime_topo(Pilha *p)
{
	printf("\n\nImprimindo topo...\n");
	printf("%d", p->pilha[p->topo]);
}

void imprime_multiplo7(Pilha *p)
{
	int i, proximo = p-> topo + 1;
	
	printf("\nImprimindo multiplos de 7!\n");

	for (i = 0; i <= p -> topo; i++)
	{
		proximo = proximo - 1;						// Aponta sempre para o topo da pilha
		if ((p->pilha[proximo] % 7) == 0)			// Verifica se o topo da pilha é divisível por 7
			printf("Elemento: %d;\n", p->pilha[proximo]);
	}
}

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> f28f0703fc6b53c9fb3372b875fed7b3483aa9b4
>>>>>>> 5b07fd5777ba85b9a5750cfdca6914bbbfdd0f6b
=======
void imprime_pilha(Pilha *p)				// Vou deixar a função pra caso alguém queira ver a pilha por completo :D
{
	int i, proximo = p -> topo + 1;
	printf("\nImprimindo pilha;\n");

	for (i = 0; i <= p-> topo; i++)
	{	
		proximo = proximo - 1; 
		printf("%d\n", p->pilha[proximo]);
	}
}
>>>>>>> 935aa7eb85b56a54e2596ef7047f35167b7be39b
