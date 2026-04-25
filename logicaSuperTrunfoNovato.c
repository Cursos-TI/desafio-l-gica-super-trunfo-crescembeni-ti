#include <stdio.h>

int main() {

    // CARTA 1
    char cidade1[50] = "Sao Paulo";
    char estado1[3] = "SP";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    double pib1 = 699280000000;
    int pontos1 = 50;

    float densidade1, pibpercapita1;

    // CARTA 2
    char cidade2[50] = "Rio de Janeiro";
    char estado2[3] = "RJ";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    double pib2 = 300500000000;
    int pontos2 = 30;

    float densidade2, pibpercapita2;

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // 🔥 ESCOLHA DO ATRIBUTO (fixo no código)
    // 1 = populacao
    // 2 = area
    // 3 = pib
    // 4 = densidade
    // 5 = pib per capita
    int atributo = 1;

    printf("Comparacao de cartas (");

    if (atributo == 1) {
        printf("Atributo: Populacao)\n\n");

        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nEmpate!\n");
        }

    } else if (atributo == 2) {
        printf("Atributo: Area)\n\n");

        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);

        if (area1 > area2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nEmpate!\n");
        }

    } else if (atributo == 3) {
        printf("Atributo: PIB)\n\n");

        printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, pib2);

        if (pib1 > pib2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nEmpate!\n");
        }

    } else if (atributo == 4) {
        printf("Atributo: Densidade Populacional)\n\n");

        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, densidade2);

        // REGRA INVERTIDA
        if (densidade1 < densidade2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nEmpate!\n");
        }

    } else if (atributo == 5) {
        printf("Atributo: PIB per Capita)\n\n");

        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pibpercapita1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pibpercapita2);

        if (pibpercapita1 > pibpercapita2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pibpercapita2 > pibpercapita1) {
            printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("\nEmpate!\n");
        }
    }

    return 0;
}
