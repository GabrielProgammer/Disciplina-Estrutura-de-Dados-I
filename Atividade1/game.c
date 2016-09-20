#include <stdio.h>
#include <stdlib.h>
#include "games.h"
int i,j;
Games  temp;
char escolhe_tipo[100];
float notaX;
void cria_games(Games *p, char nome, char tipo, int ano, int download, float nota){
for (i = 0; i <=100; i++)
	{
		printf("\nCADASTRANDO %d JOGO!\n", i+1);
		printf("\n\n");
		printf("Insira o nome do %d jogo\n",i+1);
		fgets (p->nome, 100, stdin);
		printf("Insira o tipo do %d jogo\n", i+1);
		fgets (p->tipo, 100, stdin);
		printf("Insira o ano de lancamento: %d\n",p->ano);
		printf("Insira o numero de downloads: %d\n",p->download);
		printf("Insira a nota do jogo %f\n", p->nota);
		printf("\n");
		getchar();
	}
	
}

void mostra_games(Games *a){
int i,j;
Games p[100], temp;
printf("\nListando todos os jogos!\n");
	printf("\n\n");

	for (i = 0; i <=100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->download);
		printf("Nota: %.1f\n", a->nota);
		printf("\n\n");
	}


Games *ordena_rating_crescente (Games *a){
for (i = 0; i <=100; i++)
	{
		
	printf("Ordenando notas por ordem crescente!\n");
	printf("\n\n");
	
	for(i=0; i <=100; i++)
	{
		for(j = 0;j <=100; j++)
		{
			if(a->nota > a[j+1].nota)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
}

}
void exibe_rating_crescente (Games *a){
for (i = 0; i < 100; i++)
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



