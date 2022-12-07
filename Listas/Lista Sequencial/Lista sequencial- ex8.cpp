#include <stdio.h>
#include <stdlib.h>

//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
//produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
//C * D). Apresente o resultado da seguinte forma:...

int a, b, c, d, df;


int main(){
	
	printf("\tCalculo Diferenca\n\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	printf("Digite o quarto valor: ");
	scanf("%d", &d);
	
	df = (a*b) - (c*d);
	
	printf("Diferenca entre %.1d x %1.d - %.1d x %.1d ", a, b, c, d);
	printf("\nDiferenca: %d", df);
	
	
	return 0;
}
