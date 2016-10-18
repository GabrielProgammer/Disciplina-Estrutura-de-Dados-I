#include <stdio.h>
#include <stdlib.h>
#include "pilhjog.h"

 void inicia_pilha(Pilha *p,int topo){
 p->topo = -1;
}

 void insere(Pilha *p, char jogo){
        
        p->topo++;
        printf("digite o nome do jogo\n",i+1);
        scanf("%c",&jogo);
        topo=jogo;
 	p -> topo = p -> topo + 1;
 }

 void imprime(Pilha *p){
        if(p==-1){
        printf("pilha vazia \n");}
        else{
	printf("visualisando ultimo jogo\n");
	printf("%c", p->pilha[p->topo]);
 }
}

 void retira_topo(Pilha *p){

 	p -> topo = p -> topo - 1;
}


