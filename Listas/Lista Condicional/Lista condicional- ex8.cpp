#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
//usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
//final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
//digitado não for válido, mostrará uma mensagem de erro.

int main(){
	
	float valor, valor1, valorf1, valor2, valorf2, valor3, valorf3, valor4, valorf4;
	char estado[10];
	
	printf("\tCalculo de imposto\n\nDigite aqui o valor do produto: ");
	scanf("%f", &valor);
	printf("\n-Mato Grosso: MG\n-Sao Paulo: SP\n-Rio de Janeiro: RJ\n-Mato Grosso do Sul: MS\nDigite agora o estado de destino do produto: ");
	scanf("%s", &estado);
	
	if(strcmp(estado, "MG")==0){
		valor1 = (valor/100) *7;
		printf("\nValor final com Destino a Mato grosso: %.2f", valorf1 = valor + valor1);
	}else if(strcmp(estado, "SP")==0){
		valor2 = (valor/100) *12;
		printf("\nValor final com destino a Sao Paulo: %2.f", valorf2 = valor + valor2);
	}else if(strcmp(estado, "RJ")==0){
		valor3 = (valor/100) *15;
		printf("\nValor final com destino a Rio de Janeiro: %.2f", valorf3 = valor + valor3);
	}else if(strcmp(estado, "MS")==0){
		valor4 = (valor/100) *8;
		printf("\nValor final com destino a Mato Grosso do Sul: %.2f", valorf4 = valor + valor4);
	}else if(strcmp(estado, "MG")!= 0 && strcmp(estado, "SP")!= 0 && strcmp(estado, "RJ")!= 0 && strcmp(estado, "MS")!= 0){
		do{
		system("cls");
		printf("Estado invalido, disponiveis somente os que estao na tela.\n-Mato Grosso: MG\n-Sao Paulo: SP\n-Rio de Janeiro: RJ\n-Mato Grosso do Sul: MS\nDigite agora o estado de destino do produto: ");
		scanf("%s", &estado);
		
	if(strcmp(estado, "MG")==0){
		valor1 = (valor/100) *7;
		printf("\nValor final com Destino a Mato grosso: %.2f", valorf1 = valor + valor1);
	}else if(strcmp(estado, "SP")==0){
		valor2 = (valor/100) *12;
		printf("\nValor final com destino a Sao Paulo: %2.f", valorf2 = valor + valor2);
	}else if(strcmp(estado, "RJ")==0){
		valor3 = (valor/100) *15;
		printf("\nValor final com destino a Rio de Janeiro: %.2f", valorf3 = valor + valor3);
	}else if(strcmp(estado, "MS")==0){
		valor4 = (valor/100) *8;
		printf("\nValor final com destino a Mato Grosso do Sul: %.2f", valorf4 = valor + valor4);
	}
		
		
	}while(strcmp(estado, "MG")!= 0 && strcmp(estado, "SP")!= 0 && strcmp(estado, "RJ")!= 0 && strcmp(estado, "MS")!= 0);
		}
	
	
	
	
	
	
	return 0;
}
