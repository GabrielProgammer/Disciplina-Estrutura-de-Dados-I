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
    	printf("Jogo: %s\tTipo: %s\tAno: %d", p[i].nome, p[i].tipo, p[i].ano);
		printf("\tDownloads: %d\tNota: %.1f\n\n", p[i].download, p[i].nota);
	}
}

void ordena_rating_crescente (Game *p) // ordena rating 
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
		printf("Nome: %s\t", p[i].nome);
		printf("Tipo: %s\t", p[i].tipo);
		printf("Ano: %d\n\t", p[i].ano);
		printf("Dowloads: %d\t", p[i].download);
		printf("Nota: %.1f\t", p[i].nota);
		printf("\n\n");
	}
}

/*
Games *ordena_rating_decrescente (Games *a){
for(i = 100; i>= 1; i--)
	{
		for(j=0; j<i ; j++)
		{
			if(a->nota < a[j+1].nota)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
}

void *exibe_rating_decrescente(Games *a){
for(i = 0; i <=100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->download);
		printf("Nota: %.1f\n", a->nota);
		printf("\n\n");	
	}
}

Games *ordena_tipo (Games *a){
for (i = 0; i <=100; i++)
	{
		if (!strcmp(escolhe_tipo, a->tipo))
		{
			printf("Nome: %s", a->nome);
			printf("Tipo: %s", a->tipo);
			printf("Ano: %d\n", a->ano);
			printf("Dowloads: %d\n", a->download);
			printf("Nota: %.1f\n", a->nota);
			printf("\n\n");
		}
	}
}
Games *ordena_ano_x (Games *a){
printf("\nMostrando jogos apenas com a nota %.1f\n", notaX);
	printf("\n\n");
	for (i = 0; i < 100; i++)
	{
		if (notaX == a->nota)
		{
			printf("Nome: %s", a->nome);
			printf("Tipo: %s", a->tipo);
			printf("Ano: %d\n", a->ano);
			printf("Dowloads: %d\n", a->download);
			printf("Nota: %.1f\n", a->nota);
			printf("\n\n");
		}
	}	
}
Games *ordena_ano_crescente (Games *a){
printf("\nListando em ordem crescente!\n");
	printf("\n\n");
	
	for (i = 0; i <=100; i++)
	{
		for (j = 0; j <=100 - 1; j++)
		{
			if (a->ano > a[j+1].ano)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (i = 0; i <=100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->download);
		printf("Nota: %.1f\n", a->nota);
		printf("\n\n");
	}
}
Games *ordena_ano_decrescente(Games *a){
printf("\nListando em ordem decrescente!\n");
printf("\n\n");
	for(i = 100; i>= 1; i--)
	{
		for(j=0; j<i; j++)
		{
			if(a->ano < a[j+1].ano)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
	
	for (i = 0; i <=100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->download);
		printf("Nota: %.1f\n", a->nota);
		printf("\n\n");
	}
}

*/

