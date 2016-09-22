#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

//  No parametro das funções, colocar como argumento a posição 0 da estrutura 'a' 
// Ter atenção nos parametros da biblioteca 'game.h', sempre colocar somente a função como argumento

int main()
{
	Game p[TSTRUCT], *a[TSTRUCT]; 
	int i;

	for (i = 0; i < TSTRUCT; i++)			// Igualando as posições das estruturas 'a' com 'p'
	{
		a[i] = p + i;
	}

    	cria_games(a[0], "God of War", "Acao", 2005, 80000, 9.9);					// Cadastro dos jogos
	cria_games(a[1], "Silent Hill", "Survival Horror", 1999, 404548, 10.0);				// Cadastro dos jogos
	cria_games(a[2], "Mario", "Plataforma", 1990, 777777, 10.0);					
	mostra_games(a[0]);						// Mostra todos os jogos(Ignore a posicao 0 do vetor)
	ordena_rating_crescente(a[0]);					// Ordena as notas em ordem crescente(Ignore a posicao 0 do vetor
	exibe_rating_crescente(a[0]);	
	rating_decrescente (a[0]);
    exibe_rating_decrescente(a[0]);
     ordena_tipo (a[0]);
    ordena_ano_x (a[0]);
     ordena_ano_crescente(a[0]);	
	ordena_ano_decrescente(a[0]);	// Exibe as notas ordenadas

}

