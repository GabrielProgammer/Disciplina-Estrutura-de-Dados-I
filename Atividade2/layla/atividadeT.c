#include<stdio.h>
#include<stdlib.h>
#include "porta.h"

void criaporta(Porta *p,char valorC,char valorM, float valorT,float valorp,float valorL,float valorD){
p->cor=valorC;
p->modelo=valorM;
p->tamanho=valorT;
p->preço=valorp;
p->largura=valorL;
p->desgaste=valorD;

void valorC(Porta *a,char valorC){
  a->cor=valorC;
  printf("a cor da porta sera: %c",valorC);
}

void valort1(Porta *a,char valorM){
  a->modelo=valorM;
  printf("o modelo da porta sera: %c",valorM);
}

void valorT(Porta *a,float valorT){
  a->valorT("o tamanho da porta sera: %f",valorT);



