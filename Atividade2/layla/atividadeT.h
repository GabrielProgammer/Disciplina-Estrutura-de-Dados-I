typedef struct porta{
char cor,tipo;
float preço,tamanho;
}Porta;

//operações
void criaporta(Porta *p,char cor,float tamanho,float preço,char tipo);
void escolhetipo(Porta *a,char tipo);
void escolhecor(Porta *a,char cor);
void escolhetamanho(Porta *a,float tamanho);
void escolhepreço(Porta *a,float preço);

void vervalores(Porta *a);

