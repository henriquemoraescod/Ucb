#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
//naturais ímpares (sem usar comando condicional).

int main(){
	
	int i, n;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui ate que numero voce deseja a impressao dos numeros impares: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		while(i%2 != 0){
			printf("\n%d", i);
			i++;
		}
	
	}
	
	
	
	
	
	return 0;
}
