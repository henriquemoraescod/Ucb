#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
//? Homens: (72,7 * h) – 58
//? Mulheres: (62,1 * h) – 44,7

int main(){
	
	float altura, peso, peso2;
	char sexo;
	
	printf("\tCalculo do peso ideal\n\n");
	printf("Masculino- M\nFeminino- F\nDigite aqui o seu sexo: ");
	fflush(stdin);
	scanf("%s", &sexo);
	printf("Digite agora a sua altura: ");
	scanf("%f", &altura);
	
	if(strcmp(sexo, "m")==0){
	peso = (72,7 * altura) - 58;
		printf("\nO seu peso ideal e: %f", peso);
	}else if(strcmp(sexo, "F")==0){
	peso2 = (62,1 * altura) - 44,7;
		printf("\nO seu peso ideal e: %f", peso2);
	}
	
	
	
	
	
	return 0;
}
