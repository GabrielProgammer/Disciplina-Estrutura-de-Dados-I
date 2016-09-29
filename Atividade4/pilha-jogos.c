#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

void inicia(Game *p)
{
	p->topo = -1;
}

void cadastra(Game *p, char nomeG[TAM], int anoG)
{
	p->topo = p->topo + 1;
	p->ano = anoG;
	strcpy(p->nome, nomeG);
}

void mostra_games(Game *p)
{
	printf("Printando todos os jogos\n");

	for (i = 0; i < TSTRUCT; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Ano: %d\n", p[i].ano);
	}
}

void visualiza(Game *p, char nomeG[TAM])
{
	for (i = 0; i < TSTRUCT; i++)
	{
		if (!strcmp(nomeG, p[i].nome))
		{
				printf("Jogo %s visualizado!\n", nomeG);
				strcpy(g[i].nome, nomeG);  
		}	
	}
}

