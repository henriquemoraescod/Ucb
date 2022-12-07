#include <stdio.h>
#include <stdlib.h>

//Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
//média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
//dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.

int nota1, nota2;
float nota1Pe, nota2Pe, resultado;

int main(){
	
	printf("\tMedia escolar\n\n");
	printf("Digite a primeira nota aqui: ");
	scanf("%d", &nota1);
	printf("Digite a segunda nota aqui: ");
	scanf("%d", &nota2);
	
	nota1Pe = nota1 * 3.5;
	nota2Pe = nota2 * 7.5;
	resultado = (nota1Pe + nota2Pe)/ 2;
	
	if(resultado>10){
		printf("Essa e a sua media final: 10.0");
	}else{
		printf("Essa e a sua media final: %f", resultado);
	}
	

	return 0;
}
