#include<stdio.h>
#include<stdlib.h>
#include "listadupla.h"

int main(){
Lista *l;
l = criaLista();
l = insere(l,20);
l = insere(l,78);
l = insere(l,150);
l = insere(l,69);
imprime(l);
retira(l,150);
imprime(l);
imprimeInvertido(l);

//l = insere(l,20);
//l = insere(l,78);
//l = insere(l,150);
//l = insere(l,69);
//imprime(l);
imprime_rec(l);
printf("\n");
retira_rec(l,78);
imprime_rec(l);
printf("\n");
return 0;
}

