
 #define TAMANHO 10
 
 struct pilha{
 	
 	int pilha[TAMANHO];
 	int topo;
     int valor;  
 };
 
 typedef struct pilha Pilha;
 
 
 void inicializa(Pilha *p);
 void insere(Pilha *p, int elemento);
 void retira(Pilha *p);
 void emprime_topo(Pilha *p, int elemento);
 void removebase(Pilha *p, float aux);
 void remove_meio(Pilha*p, int valor,int topo);
 void inverte(Pilha *p, float aux);
 void imprime_mutiplo7(Pilha *p);
 void imprime_pilha(Pilha*
