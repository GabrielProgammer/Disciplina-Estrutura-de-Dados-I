#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "papel.h"

main()
{
	Papel p, *a =&p;

	cadastra(a, "A4", "Tilibra", "Azul", 1.00, 400); 	// Cadastra os produtos
	verifica_produto(a);					// Verifica os produtos cadastrados
	verifica_estado(a);				
	verifica_precoX(a, 1.08);				// Verifica preco especifico
	
	comprado(a, 100);					// Compra os itens
	usa(a, 88); 						// Usa
	verifica_estado(a);					// Verifica o estado dos produtos 	
	verifica_quantidade(a);					// Verifica a quantidade dos produtos

	recicla(a, 45);						// Recicla os itens comprados
	verifica_estado(a);					// Verifica o estado dos produtos 
	verifica_quantidade(a);					// Verifica a quantidade dos produtos
}
