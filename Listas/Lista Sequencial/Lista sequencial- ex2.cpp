#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um algoritmo que imprima o poema abaixo, com a mesma formata��o:
Caderno de poesias � um belo lugar.
Tantas coisas lindas que eu gostaria de falar.
Eu falo em forma de versos para todos poderem escutar.
Agora voc� j� sabe por que os poetas passam os dias escrevendo em seus
cadernos de poesias.*/

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");

	printf("Caderno de poesias � um belo lugar.\nTantas coisas lindas que eu gostaria de falar.\nEu falo em forma de versos para todos poderem escutar.\nAgora voc� j� sabe por que os poetas passam os dias escrevendo em seus\ncadernos de poesias.");
	
	return 0;
}
