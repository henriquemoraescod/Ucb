#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros
//naturais �mpares (sem usar comando condicional).

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
