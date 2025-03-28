#include<stdio.h>
#include<locale.h> //Para o setlocale
#include<stdbool.h>

//Global
int idade = 45;
int idade2 = 15;
float peso = 80.5;
char letra = 'A';
char nome[20] = "Marcelo"; //M a r c e l o
						   //0 1 2 3 4 5 6
						   
bool passoudeano = 0; //0 ou 1
double altura = 1.80;

 main()
 {
 	// idade = 44;
 	setlocale(LC_ALL, "Portuguese");
 	
	printf("Cristhian dá o toba");
	printf("\n%d %d", idade, idade2);
	printf("\n%.2f", peso);
	printf("\n%.2f", altura);
	printf("\n%c", letra);
	printf("\n%s", nome);
	printf("\n%d", passoudeano);
	
	if (idade >=60){
		printf("\nVocê é da maior idade: Veinho");
	} else if (idade >= 18){
		printf("\nVocê é de maior idade!");
	} else {
		printf("\nVocê é de menor idade!!");
	}
	
	switch(letra){
		case 'A': {
			printf("Letra A");
			break;
		}
		case 'B': {
			printf("Letra B");
			break;
		}
		default : {
			printf("Não pe uma letra");
			break;
		}
	}
	
	int i;
	for(i=0; i < 10; i++){
		printf("\nIndice: %d", i);
	}
	
	i=0;
	while(i < 10){
		printf("\nIndice: %d", i);
		i++;
	}
	
	i=0;
	do{
		printf("\nIndice: %d", i);
		i++;
	} while(i < 10);
	
	printf("\nDigite uma nova idade: ");
	scanf("%d", &idade);
	printf("\nNova idade é %d", idade);
 }
