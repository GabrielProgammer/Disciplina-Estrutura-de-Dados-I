#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TamStruct 100
#define TAM 3

typedef struct game
{
	char nome[TamStruct];
	char tipo[TamStruct];
	int ano, downloads;
	float rating;
}Game;

Game a[TAM], temp;
int i, j;
char escolhe_tipo[TamStruct];
float notaX;

void imprime_linha()
{
	printf("-------------------------------------------");
}

Game *insere (Game * p)
{
	for (i = 0; i < TAM; i++)
	{
		imprime_linha();
		printf("\nCADASTRANDO %d JOGO!\n", i+1);
		imprime_linha();
		printf("\n\n");
		printf("Insira o nome do %d jogo\n",i+1);
		fgets (a[i].nome, TamStruct, stdin);
		printf("Insira o tipo do %d jogo\n", i+1);
		fgets (a[i].tipo, TamStruct, stdin);
		printf("Insira o ano de lancamento: \n");
		scanf("%d", &a[i].ano);
		printf("Insira o numero de downloads: \n");
		scanf("%d", &a[i].downloads);
		printf("Insira a nota do jogo %d\n", i+1);
		scanf("%f", &a[i].rating);
		printf("\n");
		getchar();
	}
	imprime_linha();
}

Game *exibe_jogos (Game *p)
{
	printf("\nListando todos os jogos!\n");
	imprime_linha();
	printf("\n\n");

	for (i = 0; i < TAM; i++)
	{
		printf("Nome: %s", a[i].nome);
		printf("Tipo: %s", a[i].tipo);
		printf("Ano: %d\n", a[i].ano);
		printf("Dowloads: %d\n", a[i].downloads);
		printf("Nota: %.1f\n", a[i].rating);
		imprime_linha();
		printf("\n\n");
	}
}

Game *ordena_ano_x (Game *p)
{
	printf("\nMostrando jogos apenas com a nota %.1f\n", notaX);
	imprime_linha();
	printf("\n\n");
	for (i = 0; i < TAM; i++)
	{
		if (notaX == a[i].rating)
		{
			printf("Nome: %s", a[i].nome);
			printf("Tipo: %s", a[i].tipo);
			printf("Ano: %d\n", a[i].ano);
			printf("Dowloads: %d\n", a[i].downloads);
			printf("Nota: %.1f\n", a[i].rating);
			imprime_linha();
			printf("\n\n");
		}
	}	
}

Game *ordena_ano_crescente (Game *p)
{
	imprime_linha();
	printf("\nListando em ordem crescente!\n");
	imprime_linha();
	printf("\n\n");
	
	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM - 1; j++)
		{
			if (a[j].ano > a[j+1].ano)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
			
	for (i = 0; i < TAM; i++)
	{
		printf("Nome: %s", a[i].nome);
		printf("Tipo: %s", a[i].tipo);
		printf("Ano: %d\n", a[i].ano);
		printf("Dowloads: %d\n", a[i].downloads);
		printf("Nota: %.1f\n", a[i].rating);
		imprime_linha();
		printf("\n\n");
	}
}

Game *ordena_ano_decrescente(Game *p)
{
	imprime_linha();
	printf("\nListando em ordem decrescente!\n");
	imprime_linha();
	printf("\n\n");
	
	for(i = TAM-1; i>= 1; i--)
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
	
	for (i = 0; i < TAM; i++)
	{
		printf("Nome: %s", a[i].nome);
		printf("Tipo: %s", a[i].tipo);
		printf("Ano: %d\n", a[i].ano);
		printf("Dowloads: %d\n", a[i].downloads);
		printf("Nota: %.1f\n", a[i].rating);
		imprime_linha();
		printf("\n\n");
	}
}

Game *ordena_tipo (Game *p)
{
	for (i = 0; i < TAM; i++)
	{
		if (!strcmp(escolhe_tipo, a[i].tipo))
		{
			printf("Nome: %s", a[i].nome);
			printf("Tipo: %s", a[i].tipo);
			printf("Ano: %d\n", a[i].ano);
			printf("Dowloads: %d\n", a[i].downloads);
			printf("Nota: %.1f\n", a[i].rating);
			imprime_linha();
			printf("\n\n");
		}
	}
}


Game *ordena_rating_crescente (Game *p)
{
	imprime_linha();
	printf("Ordenando notas por ordem crescente!\n");
	imprime_linha();
	printf("\n\n");
	
	for(i=0; i < TAM; i++)
	{
		for(j = 0;j < TAM-1; j++)
		{
			if(a[j].rating > a[j+1].rating)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
}

void exibe_rating_crescente (Game a[])
{
	for (i = 0; i < TAM; i++)
	{
		printf("Nome: %s", a[i].nome);
		printf("Tipo: %s", a[i].tipo);
		printf("Ano: %d\n", a[i].ano);
		printf("Dowloads: %d\n", a[i].downloads);
		printf("Nota: %.1f\n", a[i].rating);
		imprime_linha();
		printf("\n\n");
	}
}
Game *ordena_rating_decrescente (Game *p)
{
	for(i = TAM-1; i>= 1; i--)
	{
		for(j=0; j<i ; j++)
		{
			if(a[j].rating < a[j+1].rating)
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}	
	}
}

void *exibe_rating_decrescente(Game a[])
{
	for(i = 0; i < TAM; i++)
	{
		printf("Nome: %s", a[i].nome);
		printf("Tipo: %s", a[i].tipo);
		printf("Ano: %d\n", a[i].ano);
		printf("Dowloads: %d\n", a[i].downloads);
		printf("Nota: %.1f\n", a[i].rating);
		imprime_linha();
		printf("\n\n");	
	}
}

int main ()
{
	Game *p = a;
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
				imprime_linha();
				ordena_ano_x(p);
			}
		}
	
		if (escolha == 3)
		{
			printf("Insira o tipo desejado: ");
			getchar();
			fgets(escolhe_tipo, TamStruct, stdin);
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
