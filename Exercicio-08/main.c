#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, sum;
	
	for(i = 2; i < 501; i = i + 2) { 
		sum=sum+i;
	}
	
	printf("A soma dos valores é %d", sum);
	
	return 0;
}
