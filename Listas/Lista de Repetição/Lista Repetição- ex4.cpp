#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3 considerando
//n�meros maiores que 0.

int main(){
	
	int i, n;
	
	printf("\tNumeros multiplos de 3\n\nDigite aqui ate que numero deseja a impressao: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		while(i%3 == 0){
				printf("\n%d", i);
				i++;
		}
	
		
	}
	
	
	
	
	
	return 0;
}
