#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pincel.h"
int main (){Pincel p, *l=&p;
printf("criando\n");
cria_pincel(l, "Condor",10.00, "pratico", "verde",50);
mostra(l);
exibe_preco(l, 10.00);
estado_pincel(l,50);
printf("comprar pincel\n");
compra(l,10.00);
  	usa(l,50); 	
 	estado_pincel(l,50);
  	exibe_quantidade(l,50);
  	mostra(l);
printf("vender pincel \n");
	vende(l, 50);
	usa(l, 50);
	estado_pincel(l,50);
	exibe_quantidade(l,50);	
	mostra(l);
}	
			
