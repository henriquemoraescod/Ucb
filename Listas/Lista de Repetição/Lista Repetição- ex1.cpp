#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
//naturais de 0 at� N em ordem crescente.

int main(){
	
	int i, n;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui ate que numero voce deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		printf("\n%d", i);
	}
	
	
	
	
	
	return 0;
}
