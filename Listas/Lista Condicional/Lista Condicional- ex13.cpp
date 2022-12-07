#include <stdio.h>
#include <stdlib.h>

// Faça um programa que informe o mês de acordo com o número digitado pelo usuário.
//Exemplo: Entrada = 4. Saída = Abril.

int main(){
	
	int mes;
	
	printf("\tMes do ano\n\nDigite aqui o numero do mes: ");
	scanf("%d", &mes);
	
	if(mes==1){
		printf("\nJaneiro");
	}else if(mes==2){
		printf("\nFevereiro");
	}else if(mes==3){
		printf("\nMarco");
	}else if(mes==4){
		printf("\nAbril");
	}else if(mes==5){
		printf("Maio");
	}else if(mes==6){
		printf("\nJunho");
	}else if(mes==7){
		printf("\nJulho");
	}else if(mes==8){
		printf("\nAgosto");
	}else if(mes==9){
		printf("\nSetembro");
	}else if(mes==10){
		printf("\nOutubro");
	}else if(mes==11){
		printf("\nNovembro");
	}else if(mes==12){
		printf("\nDezembro");
	}
	
	
	
	
	
	return 0;
}
