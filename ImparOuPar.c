#include<stdio.h>
#include<string.h>
#include<locale.h> //Para o setlocale

int num;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite um número: ");
	scanf("%d", &num);
	printf("\nNova idade é %d", num);
	
	if(num % 2 == 0)
	{
		printf("\n O número é PAR");
	}
	else
	{
		printf("\n O número é ÌMPAR");
	}
}