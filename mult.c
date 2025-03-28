#include <stdio.h>

//Declara a função multiplicar
int multiplicar(int x, int y);

main(){
	int num1=3;
	int num2=4;
	int resultado=0;
	
	resultado = multiplicar(num1, num2);
	printf("%d", resultado);
}

int multiplicar(int x, int y){
	return x*y;
}