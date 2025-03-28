#include<stdio.h>
#include<string.h>
#include<locale.h> //Para o setlocale

struct Aluno{
	char nome[40];
	int idade;
	float peso;
};

main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Aluno a1;
	a1.idade = 19;
	a1.peso = 58.5;
	
	//a1.nome = "Eloize Aiume"
	strcpy(a1.nome, "Eloize Aiume");
	printf("\n%s tem %d anos e pesa %.2f", a1.nome, a1.idade, a1.peso);
}