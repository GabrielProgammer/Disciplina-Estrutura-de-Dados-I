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
}
