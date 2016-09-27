<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializa(Pilha *p)
{
      p->topo = -1;

}
void insere(Pilha *p, int elementoP)
{
 
    if(p-> topo == TAMANHO -1)
 printf("\nPILHA CHEIA! impossivel inserir elemento;\n");
 else
 {
 p-> topo = p->topo +1;
 p->pilha[p->topo] = elementoP;
 
}
}

void retira(Pilha *p)
{
if (p->topo == -1)
 printf("\nPILHA VAZIA! impossivel retira elemento;\n");
 else
 p->topo = p->topo -1;
	
}
void imprime_topo(Pilha *p, int elementoP)
{
printf("\n\nImprimindo topo...\n");
 	printf("%d", p->pilha[p->topo]);


}
void inverte(Pilha *p)
{
printf("\nInvertendo o topo pelA base!\n");
 
 }
	void imprime_multiplo7(Pilha *p){
	int i, proximo = p-> topo + 1;
 	
 	printf("\nImprimindo multiplos de 7!\n");
 
 	for (i = 0; i <= p -> topo; i++)
 	{
 		proximo = proximo - 1;						// Aponta sempre para o topo da pilha
 		if ((p->pilha[proximo] % 7) == 0)			// Verifica se o topo da pilha � divis�vel por 7
 			printf("Elemento: %d;\n", p->pilha[proximo]);
 	}
 }

 void imprime_pilha(Pilha *p)
 {
 int i, proximo = p -> topo + 1;
	
 	printf("\nImprimindo pilha;\n");
 
 	for (i = 0; i <= p-> topo; i++)
 	{	
 		proximo = proximo - 1; 
 		printf("%d\n", p->pilha[proximo]);
 	}
 
 
 }
  void remove_meio(Pilha *p,int valor, int topo){
   p->valor;
   p->topo;
   int i,j,aux,vet;
   if(valor != topo){
    do{  
     for(i=0;i<=TAMANHO;i++){
      for(j=0;j<=TAMANHO-1;j++){
       if(p[j].valor!= p[j+1].topo){
        aux=p[j+1].topo;
        vet=aux;
        topo--;
        while(valor!= topo)
	
        break;
      }
     }
    }
   }
  while("");
  }
        
      }

>>>>>>> b534d0fb9d60e22932e1fb1e0cd33db88ee6f1e9
