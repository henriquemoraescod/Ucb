#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua
//senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros números do
//cpf. Elabore um algoritmo que gere e imprima a senha.

int main(){
	
	int i, cpf[50];
	char nome[50], sobrenome[50];
	char cpfStr[50], cpf3[50];

	
	printf("\tGerador de senha\n\nDigite aqui o seu nome: ");
	scanf("%s", &nome);
	printf("Digite seu sobrenome: ");
	scanf("%s", &sobrenome);
	printf("Digite seu CPF: ");
	scanf("%d", &cpf);
	
	sprintf(cpfStr, "%d", cpf);
	strncat(cpf3, cpfStr, 3);
	strncat(nome, sobrenome, 1);
	strcat(nome, cpf3);
	
	printf("Sua senha: %s", nome );
	

	
	
	return 0;
}
