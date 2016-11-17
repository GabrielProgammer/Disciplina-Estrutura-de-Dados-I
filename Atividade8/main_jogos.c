#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogos.h"
#define TAM 50
int main()
{
    Game *p;
    p = cria();
    printf("Lista de jogos!!!\n");
    p = insere(p, "God Of War", 2001);
    p = insere(p, "Super Mario", 1990);
    p = insere(p, "Mortal kombat x", 2016);
    p = insere(p, "Ninja Gaiden", 2010);
    imprime(p);
    
	printf("\n procurando se jogo esta na lista!!!\n");
    printf("caso esteja retiar-lo da lista!!!\n");
    retira(p, "Sonic");
    printf("\n nova lista sera criada caso seja efetuada a retirada!!!\n");
    printf("Lista de jogos!!!\n");
    imprime(p);

    printf("\n procurando se jogo esta na lista!!!\n");
    printf("caso esteja retiar-lo da lista!!!\n");
    retira(p, "Super Mario");
    printf("\nnova lista sera criada caso seja efetuada a retirada!!!\n");
    printf("Lista de jogos!!!\n");
    imprime(p);
	printf("\n");
     p = cria();
    printf("Lista de jogos!!!\n");
    p = insere(p, "God Of War", 2001);
    p = insere(p, "Super Mario", 1990);
    p = insere(p, "Mortal kombat x", 2016);
    p = insere(p, "Ninja Gaiden", 2010);
    imprime(p);
  jogos_recentes(p);
  // p = jogos_recentes(p, "God of War", 2016)
    
    return 0;
}

