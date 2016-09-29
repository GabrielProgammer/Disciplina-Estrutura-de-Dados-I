#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

int main()
{
	Game p[TSTRUCT], g[TSTRUCT], *a[TSTRUCT], *b[TSTRUCT];

	for (i = 0; i < TSTRUCT; i++)
	{
		a[i] = p + i;
		b[i] = g + i;
	}

	inicia(a[0]);
	cadastra(a[0], "Super Mario", 15);
	cadastra(a[1], "Silent H", 17);
	cadastra(a[2], "mortal", 7);
	mostra_games(a[0]);
	visualiza(a[0], "mortal");
}