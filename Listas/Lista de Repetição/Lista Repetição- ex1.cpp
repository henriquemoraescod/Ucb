#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro positivo N e imprima todos os números
//naturais de 0 até N em ordem crescente.

int main(){
	
	int i, n;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui ate que numero voce deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		printf("\n%d", i);
	}
	
	
	
	
	
	return 0;
}
