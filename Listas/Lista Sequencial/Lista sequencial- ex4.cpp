#include <stdio.h>
#include <stdlib.h>

//Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
//de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
//forma “valor de A” + “valor de B” = “valor de X”.

float A, B, x;

int main(){
	
	printf("\tPrograma de soma\n\n");
	printf("Digite o primeiro valor que deseja somar: ");
	scanf("%f", &A);
	printf("Digite o segundo valor que deseja somar: ");
	scanf("%f", &B);
	
	x = A + B;
	
	printf("%.1f + %.1f = %.1f", A, B, x);
	
	
	
	return 0;
}
