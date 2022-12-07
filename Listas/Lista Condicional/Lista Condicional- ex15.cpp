#include <stdio.h>
#include <stdlib.h>

//Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
//imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-
//feira, se 2, e assim por diante

int main(){
	
	int dia;
	
	printf("\tDia da semana\n\nDigite aqui o numero do dia: ");
	scanf("%d", &dia);
	
	switch(dia){
		
			case 1:
			printf("\nDomingo");
			break;
			
		case 2:
			printf("\nSegunda");
			break;
		
		case 3:
			printf("\nTerca");
			break;
			
		case 4:
			printf("\nQuarta");
			break;
			
		case 5:
			printf("\nQuinta");
			break;
			
		case 6:
			printf("\nSexta");
			break;
			
		case 7:
			printf("\nSabado");
			break;
	}
	
	
	
	
	
	return 0;
}
