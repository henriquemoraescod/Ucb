#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia 10 inteiros e imprima sua m�dia.

int main(){
	
	int i, n[10], resultado, soma;
	
	for(i=0;i<10;i++){
		printf("Digite um valor a ser somado: ");
		scanf("%d", n[i]);
		
		soma = soma + n[i];
	}
	
	printf("\nResultado: %d", resultado/10);
	
	
	
	
	return 0;
}
