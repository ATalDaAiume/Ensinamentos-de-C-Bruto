#include <stdio.h>
#include <strings.h>
 
#define TAM 5
 
struct aluno{
	char nome[255];
	int ra;
	int serie;
	char curso[100];
};
 
 
int main(){
	struct aluno aluno_estrutura[TAM];
 
	printf("Cadastro de Aluno:\n");
	for(int i=0; i<TAM; i++){
		printf("Digite seu nome: ");
		fgets(aluno_estrutura[i].nome, sizeof(aluno_estrutura[i].nome),stdin);
		printf("Digite o RA: ");
		scanf("%d", &aluno_estrutura[i].ra);
		printf("Digite a Serie: ");
		scanf("%d", &aluno_estrutura[i].serie);
		printf("Digite seu Curso: ");
		getchar();
		fgets(aluno_estrutura[i].curso, sizeof(aluno_estrutura[i].curso),stdin);
		printf("\n");
	}
	printf("Relatorio de Alunos:\n");
	printf("-------------------\n");
	for(int i=0; i<TAM; i++){
		printf("Nome do Aluno: %s\n",aluno_estrutura[i].nome);
		printf("RA: %d\n", aluno_estrutura[i].ra);
		printf("SERIE: %d\n", aluno_estrutura[i].serie);
		printf("CURSO: %s\n",aluno_estrutura[i].curso);
	}
	system("PAUSE");
}