#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o
//quociente da divis�o do primeiro pelo segundo n�mero.

int Resto, n1, n2;
float Resultado;

int main(){
	
	printf("\tResultado e resto\n\n");
	printf("Digite aqui o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite aqui o segundo numero: ");
	scanf("%d", &n2);
	
	Resultado = n1/n2;
	Resto = n1%n2;
	
	printf("\nResultado: %.2f", Resultado);
	printf("\nResto: %d", Resto);	
	
	
	
	
	return 0;
}
