#include <stdio.h>
#include <stdlib.h>

//Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
//correspondente em minutos e segundos destas horas.

int Horas;
float Minutos, Segundos;

int main(){
	
	printf("\tConversao de horas\n\n");
	printf("Digite a hora que voce deseja converter: ");
	scanf("%d", &Horas);
	
	Minutos = Horas*60;
	Segundos = Horas*3600;
	
	printf("\n%d horas em minutos: %.2f", Horas, Minutos);
	printf("\n%d horas em segundos: %.2f", Horas, Segundos);
	
	
	
	
	
	
	return 0;
}
