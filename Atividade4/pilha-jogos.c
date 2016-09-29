#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

void inicia(Visualizados *g)
{
	g->topo = -1;
}

void cadastra(Game *p, char nomeG[TAM], int anoG)
{
	p->ano = anoG;
	strcpy(p->nome, nomeG);
}

void visualiza(Game *p, Visualizados *g, char nomeG[TAM])
{
	for (i = 0; i < TSTRUCT; i++)
	{
		if (!strcmp(nomeG, p[i].nome))
		{
				printf("Jogo %s visualizado!\n", nomeG);
				g->topo = g->topo + 1;
				strcpy(g[g->topo].visualizado, nomeG);
		}	  
	}
}

void ver_ultimo_jogado(Visualizados *g)
{
	printf("Ultimo jogo jogado: %s\n", g[g->topo].visualizado);
}

void exclui_ultimo_jogado(Visualizados *g)
{
	if (g->topo == -1)
		printf("Nenhum jogo jogado, impossivel remover!\n");
	else
		g -> topo = g -> topo -1;

}