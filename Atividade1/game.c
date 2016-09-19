#include <stdio.h>
#include <stdlib.h>
#include "games.h"

void cria_games(Games *p, char nomeP, char tipoP, int anoP, int downloadasP, float notaP){
int i, j;
for (i = 0; i <=100; i++)
	{
		imprime_linha();
		printf("\nCADASTRANDO %d JOGO!\n", i+1);
		imprime_linha();
		printf("\n\n");
		printf("Insira o nome do %d jogo\n",i+1);
		scanf ("%s",p->nome=nomeP);
		printf("Insira o tipo do %d jogo\n", i+1);
		scanf ("%s", p->tipo=tipoP);
		printf("Insira o ano de lancamento: \n");
		scanf("%d", p->ano=anoP);
		printf("Insira o numero de downloads: \n");
		scanf("%d", p->download=downloadP);
		printf("Insira a nota do jogo %d\n", i+1);
		scanf("%f", p->nota=notaP);
		printf("\n");
		getchar();
	}
	imprime_linha();
}
}
void mostra_games(Games *a){
int i,j;
printf("\nListando todos os jogos!\n");
	imprime_linha();
	printf("\n\n");

	for (i = 0; i <=100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->downloads);
		printf("Nota: %.1f\n", a->nota);
		imprime_linha();
		printf("\n\n");
	}
}

}
void avaliacao(Games *a, char tipoP){
int i,j;
for (i = 0; i < =100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->downloads);
		printf("Nota: %.1f\n", a->nota);
		imprime_linha();
		printf("\n\n");
	}
}

{
	for(i = 100-1; i>= 1; i--)
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



{
	for(i = 0; i < =100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->downloads);
		printf("Nota: %.1f\n", a->nota);
		imprime_linha();
		printf("\n\n");	
	}
}

}
void estilo(Games *a, char tipo){
int i,j;
for (i = 0; i <=100; i++)
	{
		if (!strcmp(escolhe_tipo, a->tipo))
		{
			printf("Nome: %s", a->nome);
			printf("Tipo: %s", a->tipo);
			printf("Ano: %d\n", a->ano);
			printf("Dowloads: %d\n", a->downloads);
			printf("Nota: %.1f\n", a->rating);
			imprime_linha();
			printf("\n\n");
		}
	}
}
void lancamento(Games *a, int ano){
int i,j;
imprime_linha();
	printf("\nListando em ordem crescente!\n");
	imprime_linha();
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
			
	for (i = 0; i < =100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->downloads);
		printf("Nota: %.1f\n", a->nota);
		imprime_linha();
		printf("\n\n");
	}
}


	imprime_linha();
	printf("\nListando em ordem decrescente!\n");
	imprime_linha();
	printf("\n\n");
	
	for(i = TAM-1; i>= 1; i--)
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
	
	for (i = 0; i < =100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->downloads);
		printf("Nota: %.1f\n", a->nota);
		imprime_linha();
		printf("\n\n");
	}
}
}
void alfabetica(Games *a, char nome){

}
