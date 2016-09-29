#include <stdio.h>#include <stdlib.h>
#include <string.h>
#include "pincel.h"
void cria_pincel(Pincel *p, char valorM[TAM],  float valorA, char valorE[TAM],char valorI[TAM],int valorO){
strcpy(p->estado_pincel, "novo");
strcpy(p->estilo, valorE);
	strcpy(p->marca, valorM);
	strcpy(p->cor, valorI);
	p->preco = valorA;
	p->quantidade = valorO;
}
void exibe(Pincel *a){
    if (a==NULL) {
printf("Inexistente");
return;}
	printf("estilo %s: \n",a-> estilo );
	printf("a marca %s: \n",a-> marca );
	printf("a cor %s: \n",a-> cor );
	printf("o preco %.2f R$: \n" ,a-> preco);
	printf("a quantidade %d:\n", a->quantidade);
}void usa(Pincel *a,int valorO){
    printf("novo\n");
    strcpy(a->estado_pincel, "novo");
}void exibe_preco(Pincel *a, float valorO)
{    printf("\nProdutos atuais");
    if ( valorO == a->preco) 
        printf("\nMarca: %s\nPreco: %.2f\n", a->marca, a->preco);
	else
	printf("\nproduto com este preco indisponivel\n");
}
void vender(Pincel *a, float valorO){
   	printf("verificando disponibilidade...");
        a-> quantidade = a -> preco + valorO;
}
void comprar(Pincel *a, float valorO){
    printf("\nverificando indisponibilidade...");
    a -> preco = a -> preco - valorO;
}
void estado_pincel(Pincel *a, int valorO){
	printf("\nestado pincel\n");
	printf("\nProduto: %s\nestado_pincel: %s\n\n", a->marca, a-> estado_pincel);
}
