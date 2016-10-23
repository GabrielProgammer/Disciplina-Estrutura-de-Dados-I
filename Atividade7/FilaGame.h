#define TAM 40		// Tamanho das strings a serem usadas
#define TSTRUCT 3	// Tamanho das posições da struct
#define TAMFILA 3	// Tamanho da fila
int i;				// Uso do for
int prox;			// Passa pra proxima posição do vetor

// Simulando o tipo booleano no Linux
enum boolean {
    true = 1, false = 0
};
typedef  enum boolean  bool;

typedef struct games
{
	char nome[TAM];
	char tipo[TAM];
	int ano, download;
	float nota;
	int cadastrados;
	int prox;
}Game;

typedef struct fila
{
  char fila[TAMFILA][TAM];
  int inicio,fim;
}Fila;

// Funções referente aos jogos
void cria_games(Game *p, char nome[TAM], char tipo[TAM], int ano, int download, float nota);
void mostra_games(Game *p);
void ordena_rating_crescente (Game *p);
void exibe_rating_crescente (Game *p);
void rating_decrescente (Game *p);
void exibe_rating_decrescente(Game *p);
void ordena_tipo (Game *p, char tipo[TAM]);
void ordena_ano_x (Game *p, float nota);
void ordena_ano_crescente (Game *p);
void ordena_ano_decrescente(Game *p);
void imprime_linha();

// Funções referente a fila
void jogarDepois(Game *p, Fila *f, char nome[TAM]);
void iniciaFila(Fila *f);
void mostraFila(Fila *f);
void jogar(Game *p, Fila *f, char nome[TAM]);
bool filaVazia(Fila *f);
bool filaCheia(Fila *f);
bool possueCadastro(Game *p, char nome[TAM]);
bool possueNaFila(Fila *f, char nome[TAM]);
bool ordemCorreta(Fila *f, char nome[TAM]);
