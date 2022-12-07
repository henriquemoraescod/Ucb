#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do
//usuário. Concatene os dados e imprima o valor final.

int main(){
	
	char nome1[50], nome2[50], nome3[50];
	
	printf("\tConcatenacao de nomes\n\nDigite aqui seu primeiro nome: ");
	scanf("%s", &nome1);
	printf("Digite agora seu nome do meio: ");
	scanf("%s", &nome2);
	printf("Digite agora seu ultimo nome: ");
	scanf("%s", &nome3);

	strcat(nome2, nome3);

	
	printf("\nNome completo: %s%s",nome1, nome2);
	
	
	
	
	
	return 0 ;
}
