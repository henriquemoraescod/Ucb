#include <stdio.h>
#include <stdlib.h>

//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

int main(){
	
		
	int i, n, s;
	
	printf("\tImpreessao de numero naturais\n\nDigite aqui ate que numero voce deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		while(i%2 == 0){
			printf("\n%d", i);
			s = s +i;
		}
		
	}
	
		printf("\n%d", s);
	
	
	return 0;
}
