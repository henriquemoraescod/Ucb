#include <stdio.h>
#include <stdlib.h>

// Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es
//matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma das op��es, e
//o seu programa pede dois valores num�ricos e realiza a opera��o, mostrando o
//resultado

int main(){
	
	int operacao, s1, s2, resultadoS, sb1, sb2, resultadoSb, m1, m2, resultadoM, d1, d2, resultadoD;
	
	printf("\tOperacoes Matematicas\\n\n-1: Soma\n-2: Subtracao\n-3: Multiplicacao\n-4: Divisao\nDigite aqui a operacao que deseja fazer: ");
	scanf("%d", &operacao);
	
	switch(operacao){
		
		case 1:
			system("cls");
			printf("Digite aqui o primeiro valor: ");
			scanf("%d", &s1);
			printf("Digite aqui o segundo valor: ");
			scanf("%d", s2);
			
			printf("Resultado da soma: %d", resultadoS = s1+s2);
			
			break;
			
			
			
		case 2:
			system("cls");
			printf("Digite aqui o primeiro valor: ");
			scanf("%d", &sb1);
			printf("Digite aqui o segundo valor: ");
			scanf("%d", sb2);
			
			printf("Resultado da subtracao: %d", resultadoSb = sb1-sb2);
			
			break;
			
		case 3:
			system("cls");
			printf("Digite aqui o primeiro valor: ");
			scanf("%d", &m1);
			printf("Digite aqui o segundo valor: ");
			scanf("%d", m2);
			
			printf("Resultado da multiplicacao: %d", resultadoM = s1 * s2);
			
			break;
			
		case 4:
			system("cls");
			printf("Digite aqui o primeiro valor: ");
			scanf("%d", &d1);
			printf("Digite aqui o segundo valor: ");
			scanf("%d", d2);
			
			printf("Resultado da divisao: %d", resultadoD = s1 / s2);
			
			break;
			
			
			
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
