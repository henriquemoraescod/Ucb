#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
//�mpar.

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
