#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct jogo
{
	char nome[100];
	char tipo[100];
	int ano, downloads;
	float nota;
};
typedef struct jogo Jogo;

int main()
{
	int i, escolha;
	char estilo[20];
	Jogo a[3];

	for (i = 0; i < 3; i++) //receber os dados do usuario
	{
		printf("Cadastrando game %d\n", i+1);
		printf("Insira o nome do jogo: \n");
		gets(a[i].nome);
		printf("Insira o genero do jogo: \n");
		gets(a[i].tipo);
		printf("Insira o ano do jogo: \n");
		scanf("%d", &a[i].ano);
		printf("Insira o numero de dowmloads: \n");
		scanf("%d", &a[i].downloads);
		printf("Insira a nota: \n");
		scanf("%f", &a[i].nota);
		getchar();
	}
	printf("\nConcluido com sucesso!\n");
	printf("\nO que deseja fazer?\n");
	printf("01- Listar os games existentes;\n02- Listar por ordem de avaliacao;\n");
	printf("03- Listar por estilo;\n04- Mostrar os mais recentes.\n");
	scanf("%d", &escolha);

	switch (escolha)
	{
		case 1:
			printf("\n\nMostrando os jogos!\n");
			for (i = 0; i < 3; i++)
			printf("%s\n", a[i].nome);	
			break;
		case 2:
				printf("\n\nListando por ordem de avaliacao!\n");
				break;
		case 3:
				printf("\n\nListando por estilo!\n");
				for (i = 0; i < 3; i++)
					if(!strcmp(a[i].tipo, a[i+1].tipo)) //se sao iguais
					{
					strcat(a[i].nome, a[i+1].nome);
					printf("Estilo: %s\nNome: %s\n", a[i].tipo, a[i].nome);
					}
					break;
		case 4:
				printf("\n\nListando os mais recentes!\n");	
	}
}

