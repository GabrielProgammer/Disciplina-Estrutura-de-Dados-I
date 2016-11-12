#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
Lista *l;
printf("LISTA ORIGINAL!!!");
printf("\n");
l = cria();
l = insere(l, 50);
l = insere (l, 20);
l = insere (l, 100);
l= insere(l, 500);
imprime(l);
 printf("\n INFORMAR SE O DADO ABAIXO ESTA PRESENTE NA LISTA!!!");
printf("\n");
printf("\n exemplo para demonstra qualquer numero que esteja na lista e busca-lo!!!\n");
busca(l,50);
printf("\n");
   printf("LISTA ORIGINAL!!!\n");
   imprime(l);
  printf("\n apos busca retirar o numero da lista original!!!\n");
  retira(l, 100);
 printf("NOVA LISTA!!!");
 printf("\n");
 imprime(l);
inserefinal(l,10);
imprime(l);



return 0;
}

