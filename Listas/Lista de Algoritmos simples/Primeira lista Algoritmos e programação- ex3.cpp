#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
//fornecidos pelo usuário.

float nota1, nota2, nota3, resultado;

int main(){
	
	printf("\tCalculadora de media aritimetica\n\n");
	printf("Digite a primeira nota aqui: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota aqui: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota aqui: ");
	scanf("%f", &nota3);
	
	resultado = (nota1 + nota2 + nota3)/ 3;
	
	printf("\n\nEssa e a sua media: %.2f", resultado);
	
	
	return 0;
}
