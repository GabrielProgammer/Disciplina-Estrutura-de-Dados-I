#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "duplamente_jogos.h"
#define TAM 50

int main()
{
    Game *p;
p= cria();
 printf("Lista de jogos!!!\n");
    p = insere(p, "God Of War", 2001);
    p = insere(p, "Super Mario", 1990);
    p = insere(p, "Mortal kombat x", 2016);
    p = insere(p, "Ninja Gaiden", 2010);
    lista_elementos(p);
printf("\n");
retira(p, "God Of War");
lista_elementos(p);

}
