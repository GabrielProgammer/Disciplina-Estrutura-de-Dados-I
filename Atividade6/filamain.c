#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main ()
{
	Fila a, *f =&a;
	inicializa(f);
	insere (f, 45);
	insere(f, 7);
	insere(f, 74);
	insere(f, 5);
	insere(f, 12);
	retira(f);
	imprimefila(f);
	imprimefim(f);
	imprimeinicio(f);
	retiraTodos(f);
	imprimefila(f);
	insere (f, 1);
	insere(f, 45);
	insere(f, 4);
	insere(f, 9);
	insere(f, 120);
	imprimefila(f);
	contrario(f);
}

