#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor, valor_f;
	int opcao;
	char empre;
	
	printf("Refeição empresarial?(S/ N): ");
	scanf(" %c", &empre);
	printf("\n");
	
	printf("Qual o valor gasto no restaurante: ");
	scanf("%f", &valor);
	
	if(empre=='s' || empre=='S') {
	
	printf("\n");
	printf("Formas de Pagamento: \n\n");
	printf("Digite(1) - Para Pagamento a vista.\n");
	printf("Digite(2) - Para Pagamento a Prazo.\n");
	printf("Digite(3) - Para Pagamento a cartão de Crédito.\n\n");
	
	printf("Informe a Opcao desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: 
		valor_f=valor-(valor*0.05);
		printf("Valor final a pagar = %.2f", valor_f);
		break;
		
		case 2:
		valor_f=valor+(valor*0.075);
		printf("Valor final a pagar = %.2f", valor_f);
		break;
		
		case 3:
		valor_f=valor+(valor*0.003);
		printf("Valor final a pagar = %.2f", valor_f);
		break;
		
		default:
			printf("Opcao invalida. Tente Novamente...");
	}
	} else {
			printf("\n\n");
	printf("Formas de Pagamento: \n\n");
	printf("Digite(1) - Para Pagamento a vista.\n");
	printf("Digite(2) - Para Pagamento a cartão de Crédito.\n\n");
	
	printf("Informe a Opcao desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: 
		valor_f=valor-(valor*0.05);
		printf("Valor final a pagar = %.2f", valor_f);
		break;
		
		case 2:
		valor_f=valor+(valor*0.003);
		printf("Valor final a pagar = %.2f", valor_f);
		break;
		
		default:
			printf("Opcao invalida. Tente Novamente...");
		
	}
	}
	
	return 0;
}
