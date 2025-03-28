#include<stdio.h>
#include<locale.h> //Para o setlocale

int sexo, idade;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite \"1\" para Masculino e \"2\" para Feminino: ");
	scanf("%d", &sexo);
	
	printf("\nAgora digite a idade: ");
	scanf("%d", &idade);
	
	if (sexo = 1){
		if (idade >= 18){
			printf("\nPode ir sozinho à igreja");
		} else {
			printf("\nNão pode ir sozinho à igreja");
		}
	} else {
		if (idade >= 35){
			printf("\nPode ir sozinha à igreja");
		} else {
			printf("\nNão pode ir sozinha à igreja");
		}
	}
}