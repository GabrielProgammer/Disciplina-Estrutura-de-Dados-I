#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "roupa.h"

int main (){
Roupa p, *l=&p;
printf("criando a roupa!!!\n" );
cria_roupa(l, "nike",10.00, "esportivo", "verde",50);
mostra(l);
demonstra_preco(l, 10.00);
estado_da_roupa(l,50);								
printf("\n");

printf("comprando roupa!!!\n");
compra(l,10.00);       					
	usa(l,50); 			
	estado_da_roupa(l,50);					
	demonstra_quantidade(l,50);
mostra(l); 
printf("\n ");

printf("venda de roupa!!! \n");
        vende(l, 50);					
	usa(l, 50); 			
	estado_da_roupa(l,50);					
	demonstra_quantidade(l,50);
        mostra(l);
     printf("\n "); 
  
}
