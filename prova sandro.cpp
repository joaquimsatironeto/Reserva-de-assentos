#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	//VARIAVEIS
	int destino = 0, classe =0, fileira = -1, assento = -1, fim = 0;
	char poltrona = ' ',  reserva[10][6] = {
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' '}
	};
	
	
	
	//INTRODUÇÃO
	printf("\nSeja bem-vindo a companhia aerea Caiu!");
	printf("\nQue tal conhecer novos lugares pelo mundo?");
	printf("\nEssas sao as opcoes de voos disponiveis:");
	printf("\n\t 1: Portugal\n\t 2: Argentina\n\t 3: Nao quero viajar no momento.\n");



	//ESCOLHA DO DESTINO + PRIMEIRO LOOP
	do {
		scanf("%d", &destino);
		switch (destino) {
			case 1:
				printf("\nO destino escolhido foi Portugal.");
				break;
			case 2:
				printf("\nO destino escolhido foi Argentina.");
				break;
			case 3:
				exit(1);
			default:
				printf("Opçao invalida.");
				break;
			}
	} while (destino > 3);
	
	
	
	
	//ESCOLHA DA CLASSE + SEGUNDO LOOP
	printf("\nVoce deseja viajar em qual classe?");
	printf("\n\t1: Classe executiva.\n\t2: Classe economica.\n");
	do {
		scanf("%d", &classe);
		switch (classe){
			case 1:
				printf("A classe escolhida foi a executiva.");
				break;
			case 2:
				printf("A classe escolhida foi a economica.");
				printf("\nNao e permitido reservar os assentos nas janelas para passagens economicas.");
				break;
			default:
				printf("Opcao invalida.");
				break;
		}	
	} while (classe > 2);
	
	
	
	//ESCOLHA DA FILEIRA E POLTRONA
	
	do {
	
	
		printf("\nDigite a fileira (1-10): ");
		
		do {
		
			scanf("%d", &fileira);
			if( fileira > 10) {
				printf("\nFileira invalida.");}
		} while (fileira > 10);
		
		
		printf("\nDigite a poltrona [A][B][C][D][E][F]: ");
		
		do {
		
			do {
				scanf(" %c", &poltrona);
				switch(poltrona){
					case 'A':
						assento = 0;
						break;
					case 'B':
						assento = 1;
						break;
					case 'C':
						assento = 2;
						break;
					case 'D':
						assento = 3;
						break;
					case 'E':
						assento = 4;
						break;
					case 'F':
						assento = 5;
						break;
					default:
						printf("\nPoltrona invalida.\n");
						break;}
			} while (assento !=0 && assento !=1 && assento !=2 && assento !=3 && assento !=4 && assento !=5);
				
				if (classe == 2 && assento == 0 || assento == 5) {
				printf("\nPoltrona invalida\n");
			}
		} while (classe == 2 && assento == 0 || assento == 5); 
				
			if (reserva [fileira-1][assento] == 'x') {
				printf("\nPoltrona ocupada.");
		
			} else {
				reserva [fileira-1][assento] = 'x';
				printf("\n\t\t[A] [B] [C]\t[D] [E] [F]\n");
			
				for (int x=0; x<10; x++){
					
					if (x<9)	printf("\n\t0%d\t", x+1);
					else		printf("\n\t%d\t", x+1);	
					
					for (int y=0; y<6; y++){
						printf("[%c] ", reserva[x][y]);
						if (y==2){
							printf("\t");
						}
					}
				}
				printf("\n");
			}
			
			
			
			
	//FINALIZAR CÓDIGO OU CONTINUAR
	printf("\nDeseja continuar?");
	printf("\n\t1: Sim. \n\t2: Nao.\n");
	scanf("%d", &fim);
	
		switch (fim) {
		case 1:	
			break;
		case 2:
			exit(2);	
		default:
			printf("Opcao invalida.");
			break;}
			
			
	}while(fim == 1);
		


}
