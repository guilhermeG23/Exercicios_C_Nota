#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Biblioteca necessaria para utilizar comando "setlocale()" */
#include <math.h>  /* Para efetuar Outros Calculos */
#include <string.h> /* Serve para Manipula��o de String*/

// Programa para � para calcular o fatorial

int main(int charc, char** argv[]) {
	//Idioma 
	setlocale(LC_ALL, "Portuguese");

	//tipos de variaveis
	float vl, resu;
	
	//Entrada
	printf ("Entre com Valor de R: ");
	scanf ("%f",&vl);
	
	//Conta
	resu=(4*3.14*(vl*vl*vl))/3;
	
	//Printa o final
	printf ("O valor do Volume �: %.2f",resu);
	
	return 0;
}
