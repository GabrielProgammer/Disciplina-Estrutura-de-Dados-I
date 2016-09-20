#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

int main()
{
	Game p, *a=&p;
    cria_games(a, "God of War", "Acao", 2005, 80000, 8.9);					// Cadastro dos jogos
	mostra_games(a);
	cria_games(a, "Silent Hill", "Survival Horror", 1999, 404548, 10.0);	// Cadastro dos jogos
	mostra_games(a);
}

