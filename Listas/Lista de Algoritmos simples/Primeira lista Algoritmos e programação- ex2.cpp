#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo
//usu�rio (use �rea= 3.14 x raio2)

float raio, area,
 pi = 3.14;

int main(){
	
	printf("\tCalculadora de area\n\n");
	printf("Digite aqui o raio do seu circulo: ");
	scanf("%f", &raio);
	
	
	area = pi * (raio*raio);
	
	printf("\nEssa e a area do seu circulo: %f", area);
	
	
	return 0;
}
