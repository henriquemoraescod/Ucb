#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
//double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
//booleano. Na sequência, imprima todos com a formatação abaixo.

int numeroInteiro, booleano;
float numeroReal1;
double numeroReal2;
char letra, nome[30];

int main(){
	printf("\tVariaveis\n\n");
	printf("Digite aqui um numero inteiro: ");
	scanf("%d", &numeroInteiro);
	printf("Digite aqui um numero real: ");
	scanf("%f", &numeroReal1);
	printf("Digite aqui outro numero real: ");
	scanf("%lf", &numeroReal2);
	printf("Digite aqui uma letra: ");
	fflush(stdin);
	scanf("%c", &letra);
	printf("Digite aqui um nome: ");
	fflush(stdin);
	scanf("%s", &nome);
	printf("Digite aqui se deseja fechar o programa, 1 para sim e 2 para nao: ");
	scanf("%d", &booleano);
	system("cls");
	
	printf("Numero inteiro: %d", numeroInteiro);
	printf("\nNumeros reais:\n%f\n%lf", numeroReal1, numeroReal2);
	printf("\nLetra: %c", letra);
	printf("\nNome: %s", nome);
	printf("\nValor: %d", booleano);
	
	return 0;
}
