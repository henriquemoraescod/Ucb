#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
//empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
//concedido.”, caso contrário, imprima: “Empréstimo concedido.”

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
