#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float venda1, venda2, venda3, com1, com2, com3, mai;
	mai=0;
		
	//Entradas
	printf("Valor da venda do Primeiro vendedor: ");
	scanf("%f", &venda1);
	fflush(stdin);
	
	printf("Valor da venda do Segundo vendedor: ");
	scanf("%f", &venda2);
	fflush(stdin);
	
	printf("Valor da venda do Terceiro vendedor: ");
	scanf("%f", &venda3);
	fflush(stdin);
	
	//Vendedor 1
	if(venda1 >= 50000){
		com1=(venda1*12)/100;
	}else if(venda1 >= 30000 || venda1 < 50000){
		com1=(venda1*95)/1000;
	}else{
		com1=(venda1*7)/100;	
	}
			
	//Vendedor 2
	if(venda2 >= 50000){
		com2=(venda2*12)/100;
	}else if(venda2 >= 30000 || venda2 < 50000){
		com2=(venda2*95)/1000;
	}else{
		com2=(venda2*7)/100;		
	}
	
	//Vendedor 3
	if(venda3 >= 50000){
		com3=(venda3*12)/100;	
	}else if(venda3 >= 30000 || venda3 < 50000){
		com3=(venda3*95)/1000;
	}else{
		com3=(venda3*7)/100;		
	}
	
	//Maior valor
	if(mai<com1){
		mai=com1;
		if(mai<com2){
			mai=com2;
			if(mai<com3){
				mai=com3;				
			}	
		}		
	}
	
	//Final
	printf("\n\n");
	printf("O primeiro vendedor vendeu %.2f, e sua comissão foi de %.2f \n" ,venda1,com1);
	printf("O segundo vendedor vendeu %.2f, e sua comissão foi de %.2f \n" ,venda2,com2);
	printf("O terceiro vendedor vendeu %.2f, e sua comissão foi de %.2f \n" ,venda3,com3);
	printf("\n");
	printf("A maior comissão foi de %.2f", mai);
	return 0;
}
