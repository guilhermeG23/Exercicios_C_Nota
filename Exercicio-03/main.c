#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

	//Idioma correto
	setlocale(LC_ALL, "Portuguese");

	float parafuso, porca, arruela, v1, v2, v3, vtotal, valor1, valor2, valor3, valor11, valor21, valor31, pecas, semdesc;
	
	//Entradas
	printf("Insira a quantidade adquirida de Porcas: ");
	scanf("%f", &porca);
	printf("PreÃ§o por unidade para Porcas: ");
	scanf("%f", &v1);
	
	printf("\n\n");
	printf("Insira a quantidade adquirida de Parafusos: ");
	scanf("%f", &parafuso);
	printf("PreÃ§o por unidade para Parafusos: ");
	scanf("%f", &v2);

	printf("\n\n");
	printf("Insira a quantidade adquirida de Arruelas: ");
	scanf("%f", &arruela);
	printf("PreÃ§o por unidade para Porcas: ");
	scanf("%f", &v3);

	valor1 = (porca * v1);
	valor2 = (parafuso * v2);
	valor3 = (arruela * v3);

	valor11 = (valor1 - (valor1 * 0.10));
	valor21= (valor2 - (valor2 * 0.20));
	valor31 = (valor3 - (valor3 * 0.30));

	pecas=porca+parafuso+arruela;
	semdesc=valor1+valor2+valor3;
	vtotal=valor11+valor21+valor31;

	printf("\n\n");
	printf("Número de peças compradas: %0.2f\nValor bruto da compra(sem desconto): %0.2f\nValor final com desconto: %0.2f\n", pecas, semdesc, vtotal );
	
	return 0;
}
