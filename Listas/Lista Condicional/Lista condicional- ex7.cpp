#include <stdio.h>
#include <stdlib.h>


//Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior
//do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem
//positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão
//escrever "Valores nao aceitos".

int main(){
	
int a, b, c, d, e;

	printf("\tQautro valores\n\nDigite o primeiro valor aqui: ");
	scanf("%d", &a);
	printf("Digite o segundo valor aqui: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor aqui: ");
	scanf("%d", &c);
	printf("Digite o quarto valor aqui: ");
	scanf("%d", &d);

	
	if(b>c && d>a && c+d > a+b && c>0 && d>0 && a%2 == 0){
		printf("\nValores aceitos.");
	}else{
		printf("\nValores nao aceitos.");
	}
	
	
	
	
	
	return 0;
}
