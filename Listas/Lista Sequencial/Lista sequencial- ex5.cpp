#include <stdio.h>
#include <stdlib.h>

//Faça o mesmo exercício, porém, realizando o calculo dentro do printf

float A, B, x;

int main(){
	
	printf("\tPrograma de soma\n\n");
	printf("Digite o primeiro valor que deseja somar: ");
	scanf("%f", &A);
	printf("Digite o segundo valor que deseja somar: ");
	scanf("%f", &B);
	
	printf("%f + %f = %f", A, B, x=A+B);
	
	
	
	return 0;
}
