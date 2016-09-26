#include<stdio.h>
#include<stdlib.h>
#include "porta.h"

<<<<<<< HEAD
void criaporta(Porta *p,char valorC,char valort1, float valort2,float valorp,){
=======
void criaporta(Porta *p,char valorC,char valorM, float valorT,float valorp,float valorL,float valorD){
p->cor=valorC;
p->modelo=valorM;
p->tamanho=valorT;
p->preço=valorp;
p->largura=valorL;
<<<<<<< HEAD
p->design=valorD;
p->desgaste=valord;
p->madeira=valorM;

void vervalorC(Porta *a,char valorC){
  for(i=0;i<3;i++){
  a->cor=valorC;
  printf("a cor da porta: %c",valorC);
 }
}

void vervalort1(Porta *a,char valort1){
 for(i=0;i<3;i++){
 a->tipo=valort1;
 printf("o tipo e: %c",valort1);
 }
}

void vervalort2(Porta *a,float valort2){
  for(i=0;i<3;i++){
  a->tamanho=valort2
  printf("o tamanho e :%f ",valort2);
 }
}
=======
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

