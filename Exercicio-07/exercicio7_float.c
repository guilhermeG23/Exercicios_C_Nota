#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

float final, numero, total;
int normal;

normal = 0;

printf("Entre com o valor: ");
scanf("%f", &numero);

for (numero; numero >= 0; normal++) {
        total = numero + total;
        printf("Entre com o valor: ");
        scanf("%f", &numero);
        }

        final = (total / normal);
        printf("Imprimir a média: %0.2f\n", final);
        return 0;
}
