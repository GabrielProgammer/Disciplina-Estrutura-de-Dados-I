#include<stdio.h>
#include<stdlib.h>
#include "porta.h"

void criaporta(Porta *p,char valorC,char valort1, float valort2,float valorp){
p->cor=valorC;
p->tipo=valort1;
p->tamanho=valort2;
p->preço=valorp;

void valorC(Porta *a,char valorC){
  for(i=0;i<3;i++){
  a->cor=valorC;
 }
}

void valort1(Porta *a,char valort1){


