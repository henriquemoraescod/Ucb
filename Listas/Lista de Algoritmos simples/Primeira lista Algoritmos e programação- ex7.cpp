#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de
//matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora
//e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados
//de entrada e os dados de sa�da.

char nome, sexo;
int matricula;
float horas, valor, salario;

int main(){
	printf("\tDados de um funcionario\n\n");
	printf("Digite aqui seu nome: ");
	fflush(stdin);
	scanf("%s", &nome);
	system("cls");
	printf("Digite aqui o seu sexo: ");
	fflush(stdin);
	scanf("%s", &sexo);
	system("cls");
	printf("Digite aqui a sua matricula: ");
	scanf("%d", &matricula);
	system("cls");
	printf("Digite aqui a o numero de horas trabalhadas por semana: ");
	scanf("%f", &horas);
	system("cls");
	printf("Digite aqui o valor recebido por hora: ");
	scanf("%f", &valor);
	system("cls");
	printf("Digite ok para prosseguir: ");
	
	salario = (horas * valor) * 4;
	
	printf("Nome do funcionario: %s\nSexo: %s\nMatricula: %d\nSalario mensal: %f", nome, sexo, matricula, salario);
	
		
	
	
	return 0;
}
