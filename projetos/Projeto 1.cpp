#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE"); //Setando os caracteres para o padr�o portugu�s

	int i, iEmail, iEdit, j, opc, id[1000], idBackup[1000], vacina[1000], vacinaBackup[1000];
	char emailBusca[100], nome[1000][50], nomeBackup[1000][50], email[1000][50], emailBackup[1000][50], sexo[1000][15], sexoBackup[1000][15], endereco[1000][100], enderecoBackup[1000][100];
	double altura[1000], alturaBackup[1000];
    
	menu:
    	printf("PROJETO 1: VETORES\n\n1. Incluir um usu�rio\n2. Editar um usu�rio\n3. Excluir um usu�rio\n4. Buscar um usu�rio pelo e-mail\n5. Exibir todos os usu�rios cadastrados\n6. Fazer backup de todos os usu�rios cadastrados\n7. Restaurar dados\n\nDigite a op��o desejada: ");
    	fflush(stdin);
    	scanf("%d", &opc);
    	system("cls");	
	
	switch(opc){
		case 1: //#################### CADASTRO #################### (CHECADO)
    			printf("Digite a quantidade de usu�rios que ser�o cadastrados: ");
			fflush(stdin);
    			scanf("%d", &j);
    			system("cls");
    		
    			//VALIDA��O DE QUANTIDADE DE USU�RIOS A SEREM CADASTRADOS
    			do{	
				if(j > 1000 || j < 0) {
	    				printf("AVISO: Por favor, digite uma quantidade v�lida!\nQuantidade: ");
	    				fflush(stdin);
	    				scanf("%d", &j);
	    				system("cls");}
				} while (j > 1000 || j < 0);
    	
    			for(i=0;i<j;i++){
    				
    				//ID
				printf("# Usu�rio (%d) esse ser� seu ID: ", i+1);
				srand(time(NULL));
				id[i] = rand()%1000;
    				printf("%d #\nDigite 'OK' para prosseguir: ", id[i]); 
    				scanf("%d", &id);
    				system("cls");
    		
			    	//NOME
			    	printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\nNome: ", i+1, id[i]);
			    	fflush(stdin);
			    	fgets(nome[i], 50, stdin);
			    	system("cls");
	
		            	//E-MAIL
		            	printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\nE-mail: ", i+1, id[i]);
		            	fflush(stdin);
		            	fgets(email[i], 50, stdin);
		            	system("cls");

		            	//VALIDA��O "@" NO E-MAIL
		            	do {
			            if(strchr(email[i], '@') == 0) {
			                printf("\nAVISO: E-mail inv�lido!\nDigite novamente: ");
			                fflush(stdin);
			                fgets(email[i], 50, stdin);
			                system("cls");}
		            	} while (strchr(email[i], '@') == 0);
		            
		            //SEXO
		            printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\n", i+1, id[i]);
		            printf("Digite uma das op��es abaixo:\n-Feminino\n-Masculino\n-N�o declarar\nSexo: ");
		            fflush(stdin);
		            scanf("%s", &sexo[i]);
		            system("cls");
            
		            //VALIDA��O DO SEXO
					do{
						if(strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "N�o declarar") != 0) {
		            		printf("AVISO: Formato de sexo inv�lido!\n\n");
		            		printf("Digite uma das op��es abaixo:\n-Feminino\n-Masculino\n-N�o declarar\nSexo: ");
		            		fflush(stdin);
		            		scanf("%s", &sexo[i]); //NECESS�RIO USAR SCANF AO INV�S DE FGETS (CONFLITO NO STRCMP)
		            		system("cls");}
					} while(strcmp(sexo[i], "Feminino") != 0 && strcmp(sexo[i], "Masculino") != 0 && strcmp(sexo[i], "N�o declarar") != 0);
		
		            //ENDERE�O
		            printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\nEndere�o: ", i+1, id[i]);
		            fflush(stdin);
		            fgets(endereco[i], 100, stdin);
		            system("cls");
		            
		            //ALTURA
		            printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\nAltura (entre 1 e 2 metros): ", i+1, id[i]);
		            fflush(stdin);
		            scanf("%lf", &altura[i]);
		            system("cls");
            
            		//VALIDA��O DA ALTURA
		         	do{
					 	if(altura[i] < 1 || altura[i] > 2) {
		         			printf("AVISO: Altura inv�lida!\n\nAltura (entre 1 e 2 metros): ");
		         			fflush(stdin);
		            		scanf("%lf", &altura[i]);
		            		system("cls");}
					} while(altura[i] < 1 || altura[i] > 2);
            
		            //VACINA
		            printf("# INCLUIR UM USU�RIO (USU�RIO: %d, ID: %d)#\n\nVacina:\n", i+1, id[i]);
		            printf("Digite uma das op��es abaixo:\n0. N�o vacinei\n1. Vacinei\nVoc� vacinou? ");
		            fflush(stdin);
		            scanf("%d", &vacina[i]);
		            system("cls");
            
		            //VALIDA��O DE VACINA
		            do{
		            	if(vacina[i] != 1 && vacina[i] != 0){
		            		printf("AVISO: Reposta inv�lida!\n\nDigite uma das op��es abaixo:\n0. N�o vacinei\n1. Vacinei\nVoc� vacinou? ");
		            		fflush(stdin);
		            		scanf("%d", &vacina[i]);
		            		system("cls");}
					} while(vacina[i] != 1 && vacina[i] != 0);
            
            printf("\n# USU�RIO #%d CADASTRADO COM SUCESSO! #\n\n\n", i+1);
}
			goto menu;
			break;
			
		case 2: //#################### EDITAR #################### (CHECADO)

			printf("## EDITAR UM USU�RIO ##\n\n");
			printf("1. Editar um usu�rio\n0. Retornar ao menu\n\nDigite a op��o desejada: ");
			fflush(stdin);
			int opc;
			fflush(stdin);
			scanf("%d", &opc);
			system("cls");
			
			if(opc == 1){
				
				printf("## EDITAR UM USU�RIO ##\n\n");
				printf("Escolha o �ndice do usu�rio que ser� editado:\n\n");
				printf("�ndice\tID\tNome\n");
				for(i=0;i<j;i++) {
					printf("%d\t%d\t%s", i, id[i], nome[i]);
				}
				
				int iEdit;

				printf("�ndice a ser editado: ");
				fflush(stdin);
				scanf("%d", &iEdit);
				system("cls");
				
				printf("## EDITAR UM USU�RIO ##\n\n");
				printf("Usu�rio selecionado: #%d\n\nID: %d\nNome: %sE-mail: %sEndere�o: %sSexo: %s\nVacinou: %d\n\n", iEdit, id[iEdit], nome[iEdit], email[iEdit], endereco[iEdit], sexo[iEdit], vacina[iEdit] );
				printf("##############################");
				printf("\n\nSelecione o par�metro a ser editado:\n");
				printf("1. ID\n2. Nome\n3. E-mail\n4. Endere�o\n5. Sexo\n6. Status de vacina��o\n\n");
				printf("Par�metro desejado: ");
				fflush(stdin);
				scanf("%d", &opc);
				system("cls");
				
				switch(opc){
					case 1: //ID
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("ID antigo: %d\n", id[iEdit]);
						
						printf("Digite o novo ID: ");
						fflush(stdin);
						scanf("%d", &id[iEdit]);
						
						
						break;
						
					case 2: //NOME
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("Nome antigo: %s\n", nome[iEdit]);
						
						printf("Digite o novo nome: ");
						fflush(stdin);
						fgets(nome[iEdit], 50, stdin);
						
						
						break;
						
					case 3: //EMAIL
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("E-mail antigo: %s\n", email[iEdit]);
						
						printf("Digite o novo e-mail: ");
						fflush(stdin);
						fgets(email[iEdit], 100, stdin);
						break;
						
					case 4: //ENDERE�O
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("Endere�o antigo: %s\n", endereco[iEdit]);
						
						printf("Digite o novo endere�o: ");
						fflush(stdin);
						fgets(endereco[iEdit], 50, stdin);
						
						
						break;
						
					case 5: //SEXO
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("Sexo antigo: %s\n", id[iEdit]);
						
						printf("Digite o novo sexo: ");
						fflush(stdin);
						fgets(sexo[iEdit], 50, stdin);
						
						
						break;
						
					case 6: //VACINA
						printf("## EDITAR UM USU�RIO ##\n\n");
						printf("Usu�rio selecionado: %s\n\n", nome[iEdit]);
						
						printf("Status da vacina antigo: %d\n", vacina[iEdit]);
						
						printf("Digite o novo status de vacina: ");
						fflush(stdin);
						scanf("%d", &vacina[iEdit]);
						break;
						
					default:
						printf("AVISO: Op��o inv�lida!\n");
						goto menu;}
				
				printf("\n## Usu�rio editado com sucesso!##\n\n");	
				goto menu;
			} else {
				system("cls");
				goto menu;}
			
			break;
			
		case 3: //#################### EXCLUIR #################### (CHECADO)
		
			printf("## DELETAR UM USU�RIO ##\n\n");
			printf("1. Deletar um usu�rio\n0. Retornar ao menu\n\nDigite a op��o desejada: ");
			fflush(stdin);
			fflush(stdin);
			scanf("%d", &opc);
			system("cls");
			
			if(opc == 1){
				
				printf("## DELETAR UM USU�RIO ##\n\n");
				printf("Escolha o �ndice do usu�rio que ser� deletado:\n\n");
				printf("�ndice\tID\tNome\n");
				for(i=0;i<j;i++) {
					printf("%d\t%d\t%s", i, id[i], nome[i]);
				}

				printf("�ndice(usu�rio) a ser deletado: ");
				fflush(stdin);
				int iEdit;
				scanf("%d", &iEdit);
				system("cls");
				
				printf("## DELETAR UM USU�RIO ##\n\n");
				printf("Usu�rio selecionado: #%d\n\nID: %d\nNome: %sE-mail: %sEndere�o: %sSexo: %s\nVacinou: %d\n\n", iEdit, id[iEdit], nome[iEdit], email[iEdit], endereco[iEdit], sexo[iEdit], vacina[iEdit] );
				printf("##############################");
				printf("\n\nSelecione a op��o:\n");
				printf("1. Deletar todos os dados\n2. Retornar ao menu\n\n\n");
				printf("Op��o: ");
				fflush(stdin);
				scanf("%d", &opc);
				system("cls");
				
				switch(opc){
					case 1:
						id[iEdit] = 0;
						strcpy(nome[iEdit], "");
						strcpy(email[iEdit], "");
						strcpy(endereco[iEdit], "");
						strcpy(sexo[iEdit], "");
						vacina[iEdit] = 0;
						
						printf("\nExclus�o feita com sucesso!\n\n");
						Sleep(2000);
						
						goto menu;
						
					case 2:
						goto menu;
						break;
					default:
						printf("AVISO: Op��o inv�lida!\n");
						Sleep(2000);
						goto menu;
				}
			
			
		case 4: //#################### BUSCAR #################### (!!!CHECAR!!!)
		
			printf("## BUSCAR USU�RIO PELO E-MAIL ##\n\n");
			printf("Digite o email do usu�rio que deseja buscar: ");
			fflush(stdin);
			fgets(emailBusca, 100, stdin);
			
			int i_email;
			
			for(i=0;i<1000;i++){
				if(strcmp(emailBusca, email[i]) == 0){
					i_email = i;}}
				
			if (i_email != -1) {
                printf("\nId: %d", id[i_email]);
                printf("\nNome: %s", nome[i_email]); } else {printf("\nUsu�rio n�o localizado.\n");}
  
  			printf("Digite qualquer tecla para voltar ao menu: ");
  			scanf("%d", &i_email);
  			goto menu;
			break;
			
		case 5: //#################### EXIBIR TODOS #################### (CHECADO)
		
			printf("## USU�RIOS CADASTRADOS ##\n\n");

			for(i=0;i<2;i++){
				printf("########## USU�RIO %d ##########\n\n", i+1);
				printf("Id: %d\nNome: %sE-mail: %sSexo: %s\nAltura: %.lf metros\nVacinou: ", id[i], nome[i], email[i], sexo[i], altura[i]);
				
				if(vacina[i] == 1){
					printf("Sim\n\n");
				} else if(vacina[i] == 0) {
					printf("N�o\n\n");
				};
	
				}
			
			printf("Digite 'OK' para prosseguir: "); 
    			scanf("%d", &id);
			goto menu;
			break;
			
		case 6: //#################### BACKUP #################### (CHECADO)
			printf("## BACKUP DE USU�RIOS CADASTRADOS ##\n\n");
			printf("1. Fazer backup\n0. Retornar ao menu\n\nDigite a op��o desejada: ");
			fflush(stdin);
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nomeBackup[i], nome[i]);
					strcpy(emailBackup[i], email[i]);
					strcpy(enderecoBackup[i], endereco[i]);
					strcpy(sexoBackup[i], sexo[i]);
				
					idBackup[i] = id[i];
					alturaBackup[i] = altura[i];
					vacinaBackup[i] = vacina[i];
				}

				printf("\nBackup feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			
			break;
			
		case 7: //#################### RESTAURAR #################### (CHECADO)
			printf("## RESTAURA��O DE DADOS ##\n\n");
			printf("1. Restaurar dados\n0. Retornar ao menu\n\nDigite a op��o desejada: ");
			fflush(stdin);
			scanf("%d", &opc);
			
			if(opc == 1){
				for(i=0;i<j;i++) {
					strcpy(nome[i], nomeBackup[i]);
					strcpy(email[i], emailBackup[i]);
					strcpy(endereco[i], enderecoBackup[i]);
					strcpy(sexo[i], sexoBackup[i]);
				
					id[i] = idBackup[i];
					altura[i] = alturaBackup[i];
					vacina[i] = vacinaBackup[i];
				}

				printf("\nRestaura��o feito com sucesso!\n\n");
				
			} else {
				system("cls");
				goto menu;
			}
			break;
			
		default:
			printf("# AVISO: Op��o inv�lida! #\n\n");
			goto menu;}
	return 0;
}}
