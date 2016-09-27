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

void excluirabasedapilha( Pilha *p , float aux ){
	for(i=0,i<10,i++) {
	

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;
}
void inverterapilha(Pilha *p, float aux ) {
 for(i=0,i<10,i++){
 aux=p->topo
 printf("a pilha invertida é \n");
 return aux ;

	
}
 void imprime_multiplo7(Pilha *p)
 {
	
 	int i, proximo = p-> topo + 1;
 	+--
 	printf("\nImprimindo multiplos de 7!\n");
 
 	for (i = 0; i <= p -> topo; i++)
 	{
 		proximo = proximo - 1;						// Aponta sempre para o topo da pilha
 		if ((p->pilha[proximo] % 7) == 0)			// Verifica se o topo da pilha é divisível por 7
 			printf("Elemento: %d;\n", p->pilha[proximo]);
 	}
 }

 
 
