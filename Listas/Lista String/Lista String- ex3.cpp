#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabore um algoritmo que receba os dados: nome completo, e-mail e endereço de um usuário e
//faça um backup de todos eles em novas variávies.

int main(){
	
	char nome[50], email[50], endereco[50];
	char nomeBackup[50], emailBackup[50], enderecoBackup[50];
	
	printf("\tBackup de Dados\n\nDigite aqui seu nome completo: ");
	fflush(stdin);
	scanf("%s", &nome);
	printf("Digite aqui seu e-mail: ");
	fflush(stdin);
	scanf("%s", &email);
	printf("Digite aqui o seu endereco: ");
	fflush(stdin);
	scanf("%s", &endereco);
	
	strcpy(nomeBackup, nome);
	strcpy(emailBackup, email);
	strcpy(enderecoBackup, endereco);
	
	printf("\nVerificacao de backup:\nNome: %s\nEmail: %s\nEndereco: %s", nomeBackup, emailBackup, enderecoBackup);
		
	
	
	
	return 0;
}
