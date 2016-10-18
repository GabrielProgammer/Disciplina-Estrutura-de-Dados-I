#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int i;

void inicializa(Fila*f)
{
  f->inicio = 0;
  f->fim = -1;
}

void insere(Fila *f, int elemF)
{
	if (f -> fim == TAMANHO -1)
		printf("a fila está cheia , impossivel inserir elemento!\n");

	else 
	{
		f-> fim++;
		f-> fila[f -> fim]= elemF;
	}
}

void retira(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel retirar elemento!\n");

	else
		f-> inicio++;
}

void imprimefim(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel imprimir o fim da fila!\n");
	
	else
		printf("Fim da fila: %d\n" , f-> fila[f -> fim]);
}


void imprimeinicio(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel imprimir o inicio da fila!\n");

	else
		printf("Inicio da fila:%d\n", f-> fila[f -> inicio]);
}

void imprimefila(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel imprimir elementos\n");

	else
	{
		printf("Imprimindo todos os elementos na fila!\n");

		for (i = 0; i < f -> fim +1; i++)
		{
			printf(" %d\n", f-> fila [i]);
		}
	}
}

void retiraTodos(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel retirar todos os elementos\n");

	else
	{
		printf("Todos os elementos da fila foram retirados!\n");
		f->inicio = 0;
  		f->fim = -1;
	}
}

void contrario(Fila *f)
{
	if ( f -> fim < f -> inicio)
		printf("A fila está vazia, impossivel imprimir elementos ao contrario\n");

	else
	{
		printf("Imprimindo fila ao contrario!\n");
	
		for (i = f -> fim; i >= f -> inicio; i--)
		{
			printf(" %d\n", f-> fila[i]);
		}
	}
}

