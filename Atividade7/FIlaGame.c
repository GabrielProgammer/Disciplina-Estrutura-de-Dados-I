#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

void imprime_linha()
{
	printf("--------------------------------------------------------------------\n");
}

void cria_games(Game *p, char nomeG[TAM], char tipoG[TAM], int anoG, int downloadG, float notaG)        //Cria os jogos
{
		strcpy(p[prox].nome, nomeG);
		strcpy(p[prox].tipo, tipoG);
		p[prox].ano = anoG;
		p[prox].download = downloadG;
		p[prox].nota = notaG;	
		p-> cadastrados++;
		prox++;
}

bool filaCheia(Fila *f)
{
	if (f -> fim == TAMFILA -1)
		return true;

	else
		return false;
}

bool possueCadastro(Game *p, char nomeG[TAM])
{
	int possue;

	for (i = 0; i < p->cadastrados; i++)
	{
		if (!strcmp(nomeG, p[i].nome))	
			return true;
		
		else 
			possue = 1;
	}

	if (possue == 1)
		return false;
}
void mostra_games(Game *p)              // Lista os jogos
{
	int i;
	imprime_linha();
	printf("Listando os jogos existentes...\n");
	imprime_linha();

	for (i = 0; i < p->cadastrados; i++)
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

	for(i = 0; i < p->cadastrados; i++)
	{
		for(j = 0; j <p->cadastrados - 1; j++)
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
	for (i = 0; i < p->cadastrados; i++)
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
for(j = p->cadastrados -1 ; j <= 1; i--)

	{
		for(i=0; i > j; i++)
		{
			if(p[i].nota > p[i+1].nota)
			{
				temp = p[i];
				p[i] = p[i+1];
				p[i+1] = temp;
			}
		}	
	}
}

void exibe_rating_decrescente(Game *p){
int i;
for(i = 0; i < p->cadastrados; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");	
	}
}

void ordena_tipo (Game *p, char tipoX[TAM]){
int i;

printf("Exibindo jogos apenas do genero %s;\n", tipoX);
for (i = 0; i < p->cadastrados; i++)
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
}

void ordena_ano_x (Game *p, float notaX)	// Mostra apenas notas que deseja
{				
	int i;
	printf("\nMostrando jogos apenas com a nota %.1f\n", notaX);
	printf("\n\n");
	for (i = 0; i < p->cadastrados; i++)
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
	
	for (i = 0; i < p->cadastrados; i++)
	{
		for (j = 0; j < p->cadastrados - 1; j++)
		{
			if (p->ano > p[j+1].ano)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	for (i = 0; i < p->cadastrados; i++)
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
	for(i = 100; i> p->cadastrados; i--)
	{
		for(j=0; j<p->cadastrados; j++)
		{
			if(p->ano < p[j+1].ano)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}	
	}
	
	for (i = 0; i < p->cadastrados; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Tipo: %s\n", p[i].tipo);
		printf("Ano: %d\n", p[i].ano);
		printf("Dowloads: %d\n", p[i].download);
		printf("Nota: %.1f\n", p[i].nota);
		printf("\n\n");
	}
}

void iniciaFila(Fila *f)
{
	f -> inicio = 0;
	f -> fim = -1;
}

void jogarDepois(Game *p, Fila *f, char nomeG[TAM])
{
	if (possueCadastro(p, nomeG) == false)			// Verificando primeiro se o jogo existe na lista de cadastrados, caso não exista
		printf("%s, jogo nao existe!\n", nomeG);

	if (filaCheia(f))
		printf("Fila cheia, impossivel inserir jogo!\n");

	if ((possueCadastro(p, nomeG)) && ((filaCheia(f)) == false))	// Caso o jogo esteja cadastrado e a fila não estiver cheia
	{
		printf("%s inserido na fila!\n", nomeG);
		f -> fim++;
		strcpy(f->fila[f->fim], nomeG);
	}
}

void mostraFila(Fila *f)
{
	if (filaVazia(f))
		printf("Fila de jogos vazia, impossivel exibir jogos!\n");

	else
	{
		printf("Mostrando todos os jogos da fila!\n");

		for (i = f->inicio; i <= f->fim; i++)		
		{
			printf("Jogo: %s\n", f->fila[i]);
		}
		printf("\n");
	}
}

void jogar(Game *p, Fila *f, char nomeG[TAM])
{
	if (possueNaFila(f, nomeG) == false)				// Verifica se o jogo possue na fila
		printf("Impossivel jogar %s, nao existe na fila de jogos!\n", nomeG);
	
	if (possueNaFila(f, nomeG) && (ordemCorreta(f, nomeG) == false))	// Caso possuir na fila mas estiver na ordem incorreta
		printf("%s possue na fila, mas nao pode ser jogado, pois primeiro voce tem que jogar: %s!\n", nomeG, f->fila[f->inicio]);

	else if (ordemCorreta(f, nomeG))		// Caso esteja na ordem correta e possuir na fila (Só estará na ordem correta se tiver na fila)
	{
		printf("Jogando %s...\n", nomeG);
		f -> inicio++;
	}
}

bool filaVazia(Fila *f)			// Verifica se a fila está vazia 
{
	if ( f -> fim < f -> inicio)
		return true;

	else
		return false;
}

bool possueNaFila(Fila *f, char nomeG[TAM])
{
	int possue;

	for (i = 0; i <= f->fim; i++)
	{
		if (!strcmp(nomeG, f->fila[i]))	
			return true;
		
		else 
			possue = 1;
	}

	if (possue == 1)
		return false;
}

bool ordemCorreta(Fila *f, char nomeG[TAM])			// Verifica se o jogo inserido está no início da fila
{
	if (!strcmp(nomeG, f->fila[f->inicio]))
		return true;

	else
		return false;
}