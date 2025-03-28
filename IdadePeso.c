#include <stdio.h>

main(){
	int idade;
	float peso;
	
	int *pIdade, *pPeso;
	pIdade = &idade;
	pPeso = &peso;
	
	idade = 45;
	peso = 70.5;
	
	printf("\nValor da idade: %d", idade);
	printf("\nEndereço da idade: %d", &idade);
	
	printf("\nValor do peso: %.2f", peso);
	printf("\nEndereço do peso: %d", &peso);
	
	printf("\nValor da pIdade: %d", pIdade);
	printf("\nEndereço do pIdade: %d", &pIdade);
	
	printf("\nValor da pPeso: %d", pPeso);
	printf("\nEndereço do pPeso: %d", &pPeso);
}