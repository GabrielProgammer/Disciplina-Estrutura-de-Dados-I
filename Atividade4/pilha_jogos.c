#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_jogos.h"


void inicializa(Game *p){
p->topo = p->topo -1;
}
void insere_jogos(Game *p, char nomeP[TAM]){
 if(p-> topo == TAM -1)
 printf("\nPILHA CHEIA! impossivel inserir elemento;\n");
 else
 {
 p-> topo = p->topo +1;
 p->topo = nomeP[TAM];
 
}
}
void retira(Game *p){
if (p->topo == -1)
 printf("\nPILHA VAZIA! impossivel retira elemento;\n");
 else
 p->topo = p->topo -1;
}
void emprime_ultimojogo(Game *p,char nomeP[TAM] ){
if (p->topo == -1)
 printf("\nPILHA VAZIA! impossivel retira elemento;\n");
 else
 p->topo = p->topo -1;
{
	if (p->topo == -1)
 printf("\nPILHA VAZIA! impossivel retira elemento;\n");
 else
 p->topo = p->topo -1;
	{
	if (p->topo == -1)
 printf("\nPILHA VAZIA! impossivel retira elemento;\n");
 else
 p->topo = p->topo -1;
	
	}
	}	
}
void removejogoda_base(Game *p){


}
void imprime_pilhajogos(Game *p){
 int i, proximo = p -> topo + 1;
	
 	printf("\nImprimindo pilha;\n");
 
 	for (i = 0; i <= p-> topo; i++)
 	{	
 		proximo = proximo - 1;
 	   printf("%s\n", p->Game[proximo]);
	 }
}
