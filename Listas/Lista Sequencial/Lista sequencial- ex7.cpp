#include <stdio.h>
#include <stdlib.h>

//Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
//atribua esta operação à variável PROD. A seguir mostre a variável PROD com
//mensagem: PROD = “valor de PROD”.

float n1, n2, res;


int main(){
	
	printf("\tCalculo produto\n\n");
	printf("Digite o primeiro valor a ser multiplicado: ");
	scanf("%f", &n1);
	printf("Digite o segundo valor a ser multiplicado: ");
	scanf("%f", &n2);
	printf("\n%.1f x %.1f =  %.1f", n1, n2, res=n1*n2);
	return 0;
}
