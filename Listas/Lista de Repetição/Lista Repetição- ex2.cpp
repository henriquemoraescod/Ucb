#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro positivo N e imprima todos os números
//naturais de 0 até N em ordem decrescente.

int main(){
	
	int i, n;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui de que numero voce deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=n;i>=0;i--){
		printf("\n%d", i);
	}
	
	
	
	
	
	return 0;
}
