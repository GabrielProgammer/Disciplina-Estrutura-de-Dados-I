#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogo.h"

int main()
{
<<<<<<< HEAD
	Game p[TSTRUCT], g[TSTRUCT], *a[TSTRUCT], *b[TSTRUCT];
=======
	Game p[TSTRUCT], *a[TSTRUCT];
	Visualizados g[TSTRUCT], *b[TSTRUCT];
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91

	for (i = 0; i < TSTRUCT; i++)
	{
		a[i] = p + i;
		b[i] = g + i;
	}

<<<<<<< HEAD
	inicia(a[0]);
	cadastra(a[0], "Super Mario", 15);
	cadastra(a[1], "Silent H", 17);
	cadastra(a[2], "mortal", 7);
	mostra_games(a[0]);
	visualiza(a[0], "mortal");
=======
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
		
>>>>>>> ae7e017bd3ee72119b0bb3e4df8929b13d63ab91
}