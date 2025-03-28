#include <stdio.h>

//Declara a função multiplicar
int multiplicar(int *x, int *y);

main(){
	int num1=3;
	int num2=4;
	int resultado=0;
	
	//printf("\nAntes num1: %d", num1);
	resultado = multiplicar(&num1, &num2);
	printf("\n%d", resultado);
	printf("\nDepois num1: %d", num1);
}

int multiplicar(int *x, int *y){
	*x = 20;
	return (*x) * (*y);
}