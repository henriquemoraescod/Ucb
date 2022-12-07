#include <stdio.h>
#include <stdlib.h>

//Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a
//qual cidade pertence, considerando só os seguintes valores...

int main(){
	
	int ddd;
	
	printf("\tConsulta DDD\n\nDigite aqui seu ddd: ");
	scanf("%d", &ddd);
	
	switch(ddd){
		
			case 61:
			printf("\nBrasilia");
			break;
			
		case 71:
			printf("\nSalvador");
			break;
		
		case 11:
			printf("\nSao Paulo");
			break;
			
		case 21:
			printf("\nRio de Janeiro");
			break;
			
		case 32:
			printf("\nJuiz de fora");
			break;
			
		case 19:
			printf("\nCampinas");
			break;
			
		case 27:
			printf("\nVitoria");
			break;
			
		case 31:
			printf("\nBelo Horizonte");
			break;
		
		
	}
	
	

	return 0;
}
