#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
//naturais de 0 at� N em ordem decrescente.

int main(){
	
	int i, n;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui de que numero voce deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=n;i>=0;i--){
		printf("\n%d", i);
	}
	
	
	
	
	
	return 0;
}
