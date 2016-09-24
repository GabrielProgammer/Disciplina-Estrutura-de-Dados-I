#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

int main()
{
	Pilha p, *a = &p;
	inicializa(a);
	insere(a, 1);
	insere(a, 7);
	insere(a, 8);
	insere(a, 11);
	imprime_topo(a);
	retira(a);
	retira(a);
	imprime_topo(a);


}

