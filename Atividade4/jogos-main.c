#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

int main()
{
	Game p[TSTRUCT], *a[TSTRUCT];
	Visualizados g[TSTRUCT], *b[TSTRUCT];

	for (i = 0; i < TSTRUCT; i++)
	{
		a[i] = p + i;
		b[i] = g + i;
	}

	inicia(b[0]);
	cadastra(a[0], "Super Mario", 15);
	cadastra(a[1], "Silent Hill", 17);
	cadastra(a[2], "Mortal Kombat", 7);
	visualiza(a[0], b[0], "Mortal Kombat");
	visualiza(a[0], b[0], "Super Mario");
	visualiza(a[0], b[0], "Silent Hill");
	ver_ultimo_jogado(b[0]);
	exclui_ultimo_jogado(b[0]);
	ver_ultimo_jogado(b[0]);
	exclui_ultimo_jogado(b[0]);
	ver_ultimo_jogado(b[0]);
		
}