#define TAM 50 // Tamanho das strings que serão usadas

typedef struct papel
{
	char tipo[TAM];
	float preco;
	char marca[TAM];
	char cor[TAM], estado[TAM];
	int quantidade;
}Papel;

void imprimeLinha();
void cadastra(Papel *p, char tipo[TAM], char marca[TAM], char cor[TAM], float precoP, int quantidade);
void verifica_produto(Papel *p);
void verifica_precoX(Papel *p, float preco);
void comprado(Papel *p, int quantidade);
void verifica_quantidade(Papel *p);
void recicla(Papel *p, int quantidade);
void usa(Papel *p, int quantidade);
void verifica_estado(Papel *p);
