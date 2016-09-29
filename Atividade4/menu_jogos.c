#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha-jogos.h"

int main(){
Game p, *a = &p;
inicializa(a);
insere_jogos(a);
insere_jogos(a);
insere_jogos(a);
imprime_pilhajogos(a);


imprime_ultimojogo(a);
imprime_pilhajogos(a);

removejogoda_base(a);
imprime_pilhajogos(a);



}
