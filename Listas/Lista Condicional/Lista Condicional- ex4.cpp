#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
//empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
//concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�

int main(){
	
	float salario, parcela, limite;
	
	printf("\tEmprestimo bancario\n\n");
	printf("Digite aqui o seu salario: ");
	scanf("%f", &salario);
	printf("Digite aqui o valor da parcela do emprestimo: ");
	scanf("%f", &parcela);
	
	limite = (salario/100)* 20;
	
	if(parcela>limite){
		printf("\nEmprestimo nao concedido.");
	}else{
		printf("\nEmprestimo concedido.");
	}
	
	
	
	
	return 0;
}
