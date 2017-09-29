#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
        setlocale(LC_ALL, "Portuguese");

        float p1, p2, trabalho, aps, media1, media2, final;

        //Entradas
        printf("\n");
        printf("Entre com a nota da P1: ");
        scanf("%f", &p1);

        printf("\n");
        printf("Entre com a nota do trabalho: ");
        scanf("%f", &trabalho);

        printf("\n");
        printf("Entre com a nota da P2: ");
        scanf("%f", &p2);

        printf("\n");
        printf("Entre com a nota do APS: ");
        scanf("%f", &aps);

        //Contas
        media1 = ((p1 * 0.7) + (trabalho * 0.3));
        media2 = ((p2 * 0.8) + (aps * 0.2));
        final = ((media1 * 0.4) + (media2 * 0.6));

        //Comparacao e final
        if(final >= 7.00) {
                printf("Você tirou %0.2f de MÃ©dia final, mÃ©dias1:%0.2f e mÃ¡dias2: %0.2f\n", final, media1, media2);
                printf("VocÃª passou!\n");
        } else {
                if(final >= 5.00 && final <= 6.9) {
                        printf("Você tirou %0.2f de Média final, médias1:%0.2f e médias2: %0.2f\n", final, media1, media2);
                        printf("Você esta de Exame!\n");
                } else {
                        printf("Você tirou %0.2f de Média final, médias1:%0.2f e médias2: %0.2f\n", final, media1, media2);
                        printf("Você Repetiu!\n");
                }
        }

        return 0;
}
