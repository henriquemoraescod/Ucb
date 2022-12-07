#include <stdio.h>
#include <stdlib.h>

//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
//quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
//construtor tem a quantidade total de fios em metros a serem utilizados na instalação
//elétrica da obra e que cada rolo de fio tem 50 metros.

int fio, rolos, Mavulsos;

int main(){
	
	printf("\tRolos e metros avulsos\n\n");
	printf("Digite aqui a quantidade em metros do fio: ");
	scanf("%d", &fio);
	
	rolos = fio/50;
	Mavulsos = fio%50;
	
	printf("\nA quantidade de rolos: %d", rolos);
	printf("\nA quantidade de metros avulsos: %d", Mavulsos);
	
	
	
	return 0;
}
