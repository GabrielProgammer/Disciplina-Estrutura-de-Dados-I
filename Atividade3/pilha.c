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
 		if ((p->pilha[proximo] % 7) == 0)			// Verifica se o topo da pilha é divisível por 7
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

