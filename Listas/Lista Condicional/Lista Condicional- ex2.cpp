#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
//números forem iguais, imprima a mensagem “Números iguais”.

int main(){
	
	int n1, n2;

	printf("\tQual numero e maior?\n\n");
	printf("Digite aqui o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite aqui o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("\nO primeiro numero e maior que o segundo");
	}else if(n2>n1){
		printf("\nO segundo numero e maior que o primeiro");
	}else if(n1==n2){
		printf("\nOs dois numeros sao iguais. ");
	}
	
	
	return 0;
}
