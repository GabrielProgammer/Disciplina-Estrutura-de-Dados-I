#include <stdio.h>
#include <stdlib.h>
#include "games.h"
int i,j;
Games  temp;
char escolhe_tipo[100];
Games p, *l=&p;
float notaX;
void cria_games(Games *p, char nome, char tipo, int ano, int downloadas, float nota){

for (i = 0; i <=100; i++)
	{
		printf("\nCADASTRANDO %d JOGO!\n", i+1);
		printf("\n\n");
	printf("Insira o nome do %d jogo\n",i+1);
		fgets (p->nome, 100, stdin);
		printf("Insira o tipo do %d jogo\n", i+1);
		fgets (p->tipo, 100, stdin);
		printf("Insira o ano de lancamento: \n");
		scanf("%d", &p->ano);
		printf("Insira o numero de downloads: \n");
		scanf("%d", &p->download);
		printf("Insira a nota do jogo %d\n", i+1);
		scanf("%f", &p->nota);
		printf("\n");
		getchar();
	}
}
void mostra_games(Games *a){

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
	}


void avaliacao(Games *a, float nota){


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



	for (i = 0; i < 100; i++)
	{
		printf("Nome: %s", a->nome);
		printf("Tipo: %s", a->tipo);
		printf("Ano: %d\n", a->ano);
		printf("Dowloads: %d\n", a->download);
		printf("Nota: %.1f\n", a->tipo);
		printf("\n\n");
	}

	
		{
			if(a->nota < a[j+1].nota)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	


	if(""){
	
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
}
void estilo(Games *a, char tipo){

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
void lancamento(Games *a, int ano){

printf("\nListando em ordem crescente!\n");
	printf("\n\n");

	
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (a[j].ano > a[j+1].ano)
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

	printf("\nListando em ordem decrescente!\n");

	
	
	for(i = 100; i>= 1; i--)
	{
		for(j=0; j<i; j++)
		{
			if(a[j].ano < a[j+1].ano)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
	
	for (i = 0; i < 100; i++)
	{
		printf("Nome: %s",  a->nome);
		printf("Tipo: %s",  a->tipo);
		printf("Ano: %d\n",  a->ano);
		printf("Dowloads: %d\n",  a->download);
		printf("Nota: %.1f\n", a->nota);
		printf("\n\n");
	}


}
int main(){

int escolha, escolha_rating, escolha_ano, resposta = 0;
	
	insere(p);
	
	while (resposta == 0)
	{
		printf("\nO que deseja fazer?");
		printf("\n1- Listar todos os jogos existentes;\n");
		printf("2- Listar por ordem de avaliacao;\n");
		printf("3- Listar por estilo;\n");
		printf("4- Listar por ano;\n");
		printf("5 - Sair\n: ");
		scanf("%d", &escolha);
	
		if (escolha == 1)
		{
			exibe_jogos(p);
		}
		
		if (escolha == 2)
		{
			printf("\nComo deseja listar?\n");
			printf("1- Por ordem crescente;\n");
			printf("2- Por ordem decrescente\n");
			printf("3- Listar somente nota especifica\n: ");
			scanf("%d", &escolha_rating);
			printf("\n");
		
			if (escolha_rating == 1)
			{
				ordena_rating_crescente(p);
				exibe_rating_crescente(p);
			}
			
			if (escolha_rating == 2)
			{
				ordena_rating_decrescente(p);
				exibe_rating_decrescente(p);
			}
			
			if (escolha_rating == 3)
			{
				printf("\nQual nota deseja exibir?\n: ");
				scanf("%f", &notaX);
				printf("\n");
				ordena_ano_x(p);
			}
		}
	
		if (escolha == 3)
		{
			printf("Insira o tipo desejado: ");
			getchar();
			fgets(escolhe_tipo, 100, stdin);
			ordena_tipo(p);
		}
	
		if (escolha == 4)
		{
			printf("\nInsira a ordem que deseja\n");
			printf("1- Crescente;\n");
			printf("2- Decrescente;\n: ");
			scanf("%d", &escolha_ano);
		
			if (escolha_ano == 1)
				ordena_ano_crescente(p);
				
			if (escolha_ano == 2)
				ordena_ano_decrescente(p);		
		}
		
		if (escolha == 5)
			resposta = 1;
	} 
	
	return 0;
}

