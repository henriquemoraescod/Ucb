#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro e verifique se esse número é par ou
//ímpar.

int main(){

int n;

	printf("\tPar ou impar?\n\n");
	printf("Digite aqui um numero: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("\nO numero e par. ");
	}else{
		printf("\nO numero e impar. ");
	}
	
	
	
	
	
	return 0;
}
