#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "roupa.h"

void cria_roupa(Roupa *p, char valorM[TAM],  float valorP, char valorE[TAM], char valorC[TAM],int valorQ){
strcpy(p->estado_da_roupa, "nova");
strcpy(p->estilo, valorE);
    strcpy(p->marca, valorM);
    strcpy(p->cor, valorC);
	p->preco = valorP;
    p->quantidade = valorQ; 
}
void mostra(Roupa *a){
    if (a==NULL) {
printf("ponto enexistente\n");
return;}
	printf("o estilo %s: \n",a-> estilo );
	printf("a marca %s: \n",a-> marca );
	printf("a cor %s: \n",a-> cor );
	printf("o preco %.2f R$: \n" ,a-> preco);
	printf("a quantidade %d:\n", a->quantidade);

}
void usa(Roupa *a,int valorQ){
printf("\n");
    printf("\nroupa nova\n");
    strcpy(a->estado_da_roupa, "nova");
}
void demonstra_preco(Roupa *a, float valorP){
    printf("\nProdutos inseridos");
    if ( valorP == a->preco)                                    
        printf("\nMarca: %s\nPreco: %.2f\n", a->marca, a->preco);
       
    else
        printf("\nNenhum produto com este preco\n\n");
}
void vende(Roupa *a, float valorP){
    printf("verificando produto disponivel");
	a-> quantidade = a -> preco + valorP;
}
void compra(Roupa *a, float valorP){
    printf("\nverificando produto disponivel");
	a -> preco = a -> preco - valorP;
}
void demonstra_quantidade(Roupa *a, int valorQ){
    printf("quantidade de roupas\n");
    printf("Marca: %s\tQuantidade: %d\n", a->marca, a->quantidade);
}
void estado_da_roupa(Roupa *a, int valorQ){
    printf("\nvendo o estado da roupa\n");
	printf("\nProduto: %s\nestado_da_roupa: %s\n\n", a->marca, a-> estado_da_roupa);
}
