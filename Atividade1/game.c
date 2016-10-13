#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

void cria_games(Game *p, char nomeG[TAM], char tipoG[TAM], int anoG, int downloadG, float notaG)        //Cria os jogos
{
		strcpy(p->nome, nomeG);
		strcpy(p->tipo, tipoG);
		p -> ano = anoG;
		p -> download = downloadG;
		p -> nota = notaG;	
}

void mostra_games(Game *p)              // Lista os jogos
{
	int i;
	printf("Listando os jogos existentes...\n");

	for (i = 0; i < TSTRUCT; i++)
	{
    	printf("Jogo: %s\nTipo: %s\nAno: %d", p[i].nome, p[i].tipo, p[i].ano);
		printf("\nDownloads: %d\nNota: %.1f\n\n", p[i].download, p[i].nota);
	}
}

void ordena_rating_crescente (Game *p) // ordena rating crescente
{
	printf("Ordenando notas por ordem crescente!\n");
	printf("\n\n");
	Game temp;
	int i, j;	

	for(i = 0; i < TSTRUCT; i++)
	{
		for(j = 0; j < TSTRUCT - 1; j++)
		{
			if(p[j].nota > p[j+1].nota)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}	
	}
}

void exibe_rating_crescente (Game *p)
{
	int i;
	for (i = 0; i < TSTRUCT; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");
	}
}


void rating_decrescente (Game *p){
printf("Ordenando notas por ordem decrescente!\n");
printf("\n\n");
int i,j;
Game temp;
for(i = 100; i> TSTRUCT; i--)

	{
		for(j=0; j< TSTRUCT ; j++)
		{
			if(p[j].nota < p[j+1].nota)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}	
	}
}

void exibe_rating_decrescente(Game *p){
int i;
for(i = 0; i < TSTRUCT; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");	
	}
}

<<<<<<< HEAD
/*		BUG
void ordena_tipo (Game *p){
=======
void ordena_tipo (Game *p, char tipoX[TAM]){
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
int i;

printf("Exibindo jogos apenas do genero %s;\n", tipoX);
for (i = 0; i < TSTRUCT; i++)
	{
		if (!strcmp(p[i].tipo, tipoX))
		{
			printf("Nome: %s\n", p[i].nome);
			printf("Tipo: %s\n", p[i].tipo);
			printf("Ano: %d\n", p[i].ano);
			printf("Dowloads: %d\n", p[i].download);
			printf("Nota: %.1f\n", p[i].nota);
			printf("\n\n");
		}
	}
} 				BUG*/

<<<<<<< HEAD
void ordena_nota_x (Game *p, float notaX)]
{
	int i;
	printf("\nMostrandos jogos apenas com a nota %f\n", notaX);
=======
void ordena_ano_x (Game *p, float notaX){				// Mostra de acordo com a nota desejada
int i;

printf("\nMostrando jogos apenas com a nota %.1f\n", notaX);
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
	printf("\n\n");
	for (i = 0; i < TSTRUCT; i++)
	{
		if (notaX == p[i].nota)
		{
			printf("Nome: %s\n", p[i].nome);
			printf("Tipo: %s\n", p[i].tipo);
			printf("Ano: %d\n", p[i].ano);
			printf("Dowloads: %d\n", p[i].download);
			printf("Nota: %.1f\n", p[i].nota);
			printf("\n\n");
		}
	}	
}

void ordena_ano_crescente (Game *p){
int i,j;
Game temp;
printf("\nListando ano em ordem crescente!\n");
	printf("\n\n");
	
	for (i = 0; i < TSTRUCT; i++)
	{
		for (j = 0; j < TSTRUCT - 1; j++)
		{
			if (p->ano > p[j+1].ano)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	for (i = 0; i < TSTRUCT; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");
	}
}

void ordena_ano_decrescente(Game *p){
int i,j;
Game temp;

printf("\nListando ano em ordem decrescente!\n");
printf("\n\n");

	for(i = 100; i> TSTRUCT; i--)
	{
		for(j=0; j<TSTRUCT; j++)
		{
			if(p->ano < p[j+1].ano)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}	
	}
	
	for (i = 0; i < TSTRUCT; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");
	}
}



