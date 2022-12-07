#include <stdio.h>
#include <stdlib.h>

//Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
//5, mas não simultaneamente pelos dois.

int main(){
	
	int n1, n2;

	
	printf("\tDivisao por 3 e 5\n\nDigite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	if(n1%3 == 0){
		printf("\nO primeiro numero e divisivel por tres");
	}else{
		printf("\nO primeiro numero nao e divisivel por tres");
	}
	 if(n2%3 == 0){
		printf("\nO segundo numero e divisel por tres");
	}else{
		printf("\nO segundo numero nao e divisivel por tres");
	}	
	
	
	
	
	return 0;
}
