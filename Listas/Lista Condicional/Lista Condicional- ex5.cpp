#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
//número digitado ao quadrado e raiz quadrada do número digitado.

int main(){
	
	int n,n2,n3;
	
	printf("\tQuadrado e raiz\n\n");
	printf("Digite aqui um numero: ");
	scanf("%d", &n);
	
	if(n>0){
		printf("\nNumero digitado ao quadrado: %d", n2=n*n);
		printf("\nRaiz do numero digitado: %d", n3= sqrt(n));
	}else{
		printf("\nNumero negtivo.");
	}
	
	
	
	
	return 0;
}
