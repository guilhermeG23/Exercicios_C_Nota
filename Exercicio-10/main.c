#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, n6, i, jogos;
	
	printf("Quantos jogos você quer fazer: ");
	scanf("%d", &jogos);
	
	srand( time(NULL) );
	
	for(i=1; i<=jogos; i++){
	
	n1 = rand() % 59 + 1;
	n2 = rand() % 59 + 1;
	n3 = rand() % 59 + 1;
	n4 = rand() % 59 + 1;
	n5 = rand() % 59 + 1;
	n6 = rand() % 59 + 1;
			
	printf("os numeros da mega sena são %d, %d, %d, %d, %d, %d \n", n1, n2, n3, n4, n5, n6);
	
	}
	
	return 0;
}
