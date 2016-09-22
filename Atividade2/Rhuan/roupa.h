#define TAM 100
typedef struct roupa{
char marca[TAM];
char estilo[TAM]; 
char cor[TAM],estado_da_roupa[TAM];
float preco;
int quantidade;

}Roupa;

void cria_roupa(Roupa *p, char marca[TAM], float preco, char estilo[TAM], char cor[TAM],int quantidade);
void mostra(Roupa *a);
void usa(Roupa *a,int quantidade);
void demonstra_preco(Roupa *a, float preco);
void vende(Roupa *a, float preco);
void compra(Roupa *a, float preco);
void demonstra_quantidade(Roupa *a, int quantidade);
void estado_da_roupa(Roupa *a, int quantidade);

