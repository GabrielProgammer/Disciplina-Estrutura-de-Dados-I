#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

//  No parametro das funções, colocar como argumento a posição 0 da estrutura 'a' 
// Ter atenção nos parametros da biblioteca 'game.h', sempre colocar somente a função como argumento

int main()
{
	Game p[TSTRUCT], *a; 
	Fila b, *f = &b;
	a = &p[0];
	int i;
    cria_games(a, "God of War", "Acao", 2005, 80000, 8);					// Cadastro dos jogos
	cria_games(a, "Silent Hill", "Survival Horror", 1999, 404548, 10.0);				// Cadastro dos jogos
	cria_games(a, "Mario", "Plataforma", 1990, 777777, 9);					
	mostra_games(a);						// Mostra todos os jogos
//	ordena_rating_crescente(a);					// Ordena as notas em ordem crescente(Ignore a posicao 0 do vetor
//	exibe_rating_crescente(a);	
//	rating_decrescente (a);
//	exibe_rating_decrescente(a);
//	ordena_tipo (a, "Acao");
//	ordena_ano_x (a, 10.0);
//	ordena_ano_crescente(a);	
//	ordena_ano_decrescente(a);	// Exibe as notas ordenadas
	iniciaFila(f);
	jogarDepois(p, f, "God of War");
	jogarDepois(p, f, "Silent Hill");
	jogarDepois(p, f, "Mario");
	jogar(p, f, "God of War");
	jogar(p, f, "Mario");
	mostraFila(f);
	jogar(p, f, "Silent Hill");
	mostraFila(f);
}

