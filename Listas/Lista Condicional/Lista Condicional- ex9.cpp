#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
//seguintes categorias...


int main(){
	
	int idade;
	
	printf("\tCategoria de nadadores\n\nDigite aqui a sua idade: ");
	scanf("%d", &idade);
	
	if(idade>=5 && idade<=7){
		printf("\nSua categoria: Infantil A");
	}else if(idade>=8 && idade<=10){
		printf("\nSua categoria: Infantil B");
	}else if(idade>=11 && idade<=13){
		printf("\nSua categoria: Juvenil A");
	}else if(idade>=14 && idade<=17){
		printf("\nSua categoria: Juvenil B");
	}else if(idade>=18){
		printf("Sua categoria: Senior");
	}
	
	
	
	return 0;
}
