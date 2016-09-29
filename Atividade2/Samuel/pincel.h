#define TAM 50
typedef struct pincel{
char marca[TAM];
char estilo[TAM];
char cor[TAM],
estado_pincel[TAM];
float preco;
int quantidade;
}Pincel;
void cria_pincel(Pincel *p, char marca[TAM],float preco,
char cor[TAM],int quantidade);
void exibe(Pincel *a);
void usa(Pincel *a,int quantidade);
void exibe_preco(Pincel *a, float preco);
void vender(Pincel *a, float preco);
void comprar(Pincel *a, float preco);
void estado_pincel(Pincel *a, int quantidade);


