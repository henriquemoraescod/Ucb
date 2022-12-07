#include <stdio.h>
#include <stdlib.h>

//Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
//correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
//respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
//mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a
//mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
//mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9,
//inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.". No caso do
//aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
//Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
//Recalcule a média (some a pontuação do exame com a média anteriormente calculada e
//divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou
//mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois
//casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma
//mensagem "Media final: " seguido da média final para esse aluno.

int main(){
	
	float n1, n2, n3,n4, rn1, rn2, rn3, rn4, exame, media;
	
	printf("\tMedia Escolar\n\nDigite aqui a priimeira nota: ");
	scanf("%f", &n1);
	printf("Digite aqui a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite aqui a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite aqui a quarta nota: ");
	scanf("%f", &n4);
	
	rn1 = n1 * 2;
	rn2 = n2 * 3;
	rn3 = n3 * 4;
	rn4 = n4 * 1;
	
	media = (rn1+rn2+rn3+rn4)/4;
	
	if(media>7.0){
		printf("\nAluno aprovado.");
	}else if(media<5.0){
		printf("Aluno Reprovado.");
	}else if(media>=5.0 && media<=6.9){
		printf("Aluno em exame.");
		
		printf("\nDigite aqui a nota em exame: ");
		scanf("%f", &exame);
		
		media = (media + exame) / 2;
		
		printf("Media final: %.1f", media);
		
		}
			if(media >= 5.0){
			printf("Aluno aprovado com a media do exame.");
		}
		else{
			printf("Aluno reprovado com a media do exame.");
	}
	
	
	
	
	
	
	return 0;
}
