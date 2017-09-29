#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Biblioteca necessaria para utilizar comando "setlocale()" */
#include <math.h>  /* Para efetuar Outros Calculos */
#include <string.h> /* Serve para Manipulação de String*/

// Programa para é para calcular o fatorial


int main(int charc, char** argv[]) {

	//Idioma correto
	setlocale(LC_ALL, "Portuguese");
	
	//Variaveis
	float c,l,b,resu,resu1,resu2,resu3;
	
	//Entradas
	printf ("Entre com o valor em Quilos do Café: ");
	scanf ("%f",&c);
	printf ("Entre com o valor em Quilos do Litro de Leite: ");
	scanf ("%f",&l);	
	printf ("Entre com o valor em Quilos da Banana: ");
	scanf ("%f",&b);
	
	//Equacoes
	resu1=c*7.50;
	resu2=l*2.50;
	resu3=b*3.50;
	resu=resu1+resu2+resu3;
	
	//Final
	printf ("O Valor total de Cada Item é:");
	printf ("Café: %.2f - litro de Leite: %.2f - Banana: %.2f ",resu1,resu2,resu3);
	printf ("Valor Total é: %.2f",resu);
	
	return 0;
}
