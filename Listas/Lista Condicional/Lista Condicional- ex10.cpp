#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
//seguir, verifique e mostre qual a classificação dessa pessoa...

int main(){
	
	float peso, altura;
	
	printf("\tClassificacao de acordo com altura e peso\n\nDigite aqui a sua altura: ");
	scanf("%f", &altura);
	printf("Digite agora o seu peso: ");
	scanf("%f", &peso);
	
	if(altura<1.20 && peso<=60){
		printf("Sua categoria: A");
	}else if(altura>=1.20 && altura<=1.70 && peso<=60){
		printf("Sua categoria: B");
	}else if(altura>1.70 && peso<=60){
		printf("Sua categoria: C");
	}else if(altura<1.20 && peso>60 && peso<=90){
		printf("Sua categoria: D");
	}else if(altura>=1.20 && altura<=1.70 && peso>60 && peso<=90){
		printf("Sua categoria: E");
	}else if(altura>1.70 && peso>60 && peso<=90){
		printf("Sua categoria: F");
	}else if(altura<1.20 && peso>90){
		printf("Sua categoria: G");
	}else if(altura>=1.20 && altura<=1.70 && peso>90){
		printf("Sua categoria: H");
	}else if(altura>1,70 && peso>90){
		printf("Sua categoria: I");
	}
	
	
	
	
	return 0;
}
