#include<stdio.h>
#include<stdlib.h>
#include "porta.h"

void criaporta(Porta *p,char valorC,char valort1, float valort2,float valorp,){
p->cor=valorC;
p->tipo=valort1;
p->tamanho=valort2;
p->preço=valorp;
p->largura=valorL;
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


