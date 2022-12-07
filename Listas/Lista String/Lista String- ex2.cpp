#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Elabora um algoritmo que valide o nome de um cor, ou seja, o usuário poderá digitar apenas
//branco, verde e amarelo.

int main(){
	
	char cor[50];
	
	printf("\tValidacao de cor\n\nDigite aqui uma cor: ");
	fflush(stdin);
	scanf("%s", &cor);
	
	if(strcmp(cor, "Branco")!=0 && strcmp(cor, "Verde")!=0 && strcmp(cor, "Amarelo")!=0){
		do{
			system("cls");
			printf("Cor invalida, use somente as cores abaixo:\n-Branco\n-Verde\n-Amarelo\nDigite aqui uma cor: ");
			fflush(stdin);
			scanf("%s", &cor);
		}while(strcmp(cor, "Branco")!=0 && strcmp(cor, "Verde")!=0 && strcmp(cor, "Amarelo")!=0);
	}
	
	
	
	return 0;
}
