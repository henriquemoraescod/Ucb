#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um algoritmo que imprima o poema abaixo, com a mesma formatação:
Caderno de poesias é um belo lugar.
Tantas coisas lindas que eu gostaria de falar.
Eu falo em forma de versos para todos poderem escutar.
Agora você já sabe por que os poetas passam os dias escrevendo em seus
cadernos de poesias.*/

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");

	printf("Caderno de poesias é um belo lugar.\nTantas coisas lindas que eu gostaria de falar.\nEu falo em forma de versos para todos poderem escutar.\nAgora você já sabe por que os poetas passam os dias escrevendo em seus\ncadernos de poesias.");
	
	return 0;
}
