#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

<<<<<<< HEAD
void inicia(Game *p)
{
	p->topo = -1;
=======
void inicia(Visualizados *g)
{
	g->topo = -1;
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
}

void cadastra(Game *p, char nomeG[TAM], int anoG)
{
<<<<<<< HEAD
	p->topo = p->topo + 1;
=======
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
	p->ano = anoG;
	strcpy(p->nome, nomeG);
}

<<<<<<< HEAD
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

=======
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
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
