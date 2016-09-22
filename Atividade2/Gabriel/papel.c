#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "papel.h"

void imprime_linha()
{
    printf("-------------------------------------------");
}

void cadastra(Papel *p, char tipoP[TAM], char marcaP[TAM], char corP[TAM], float precoP, int quantidadeP) // Função de cadastro dos produtos
{
    strcpy(p->tipo, tipoP);
    strcpy(p->marca, marcaP);
    strcpy(p->cor, corP);
	p->preco = precoP;
    p->quantidade = quantidadeP; 
    strcpy(p->estado, "Sem uso");
}

void verifica_produto(Papel *p)         // Funcão que mostra os produtos
{  
    imprime_linha();
    printf("\nProdutos cadastrados!\n");
    imprime_linha();
    printf("\nMarca: %s\tTipo: %s\tCor: %s\tPreco: %.2f\tQuantidade: %d\n\n", p->marca, p->tipo, p->cor, p->preco, p->quantidade);
}

void verifica_precoX(Papel *p, float precoX)    // Verifica se o preço informado é igual ao preço dos produtos cadastrados
{
    imprime_linha();
    printf("\nProdutos listados com o preco inserido!\n");
    imprime_linha();

    if (precoX == p->preco)                                     
        printf("\nMarca: %s\tPreco: %.2f\n\n", p->marca, p->preco);
       
    else
        printf("\nOps.. Nenhum produto cadastrado com este preco\n\n");
}


void comprado(Papel *p, int quantidadeP)        // Compra certa quantidade de produtos
{
    imprime_linha();
    printf("\nCompra efetuada!\n");
    imprime_linha();
	p -> quantidade = p -> quantidade - quantidadeP;
}

void verifica_quantidade(Papel *p)          // Verifica o tamanho de estoque disponível
{
    imprime_linha();
    printf("\nVerificacao de quantidade!\n");
    imprime_linha();
    printf("\nMarca: %s\tQuantidade: %d\n", p->marca, p->quantidade);
    printf("\n");
}

void usa(Papel *p, int quantidadeP)         // Usa certa quantidade de papel
{
    printf("\n");
    imprime_linha();
    printf("\nProduto usado\n");
    imprime_linha();
    strcpy(p->estado, "Usado");
    
}

void recicla(Papel *p, int quantidadeP)         // Recicla certa quantidade de papel
{
    imprime_linha();
	printf("\nVoce reciclou seu papel com sucesso!\n");
    imprime_linha();
    printf("\n\nAo reciclar tera um aumento significativo no seu estoque,\n");
    printf("dependendo da quantidade reciclada :D\n\n");
	strcpy(p->estado, "Reciclado");
    p-> quantidade = p-> quantidade + (quantidadeP/2);
   
}

void verifica_estado(Papel *p)                  // Verifica o estado do papel(Sem uso, usado ou reciclado)
{
    printf("\n");
    imprime_linha();
    printf("\nVerificando estado dos produtos!\n");
    imprime_linha();
	printf("\nProduto: %s\tEstado: %s\t\n\n", p->marca, p-> estado);
}


