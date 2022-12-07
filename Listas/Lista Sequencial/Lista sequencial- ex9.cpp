#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
//vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
//15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
//do mês, com duas casas decimais.

char nome[30];
float salariof, salariot, totalv, comissao;

int main(){
	
	printf("\tSalario funcionario\n\n");
	printf("Digite aqui seu nome: ");
	fflush(stdin);
	scanf("%s", &nome);
	printf("Digite aqui seu salario fixo: ");
	scanf("%f", &salariof);
	printf("Digite aqui o total de vendas em especie: ");
	scanf("%f", &totalv);
	
	comissao = (totalv/100) * 15;
	salariot = salariof + comissao;
	
	printf("\nComissao: %.2f", comissao);
	printf("\nSalario com a comissao: %.2f", salariot);
	
	
	
	
	
	
	
	return 0;
}
