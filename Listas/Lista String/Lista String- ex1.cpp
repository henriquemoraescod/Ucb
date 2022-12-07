#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de
//caracteres digitados.

int main(){
	
	char nome[100];
	int nLetras=0;
	
	printf("\tContagem de Caracteres\n\nDigite aqui o seu nome completo: ");
	fflush(stdin);
	fgets(nome, 100, stdin);
	
	nLetras = strlen(nome);
	
	printf("\nQuantidade de letras contando com os espacos: %d", nLetras);
	
	
	
	
	
	
	
	return 0;
}
