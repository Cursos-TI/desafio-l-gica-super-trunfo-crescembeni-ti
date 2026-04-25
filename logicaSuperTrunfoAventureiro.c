#include <stdio.h>

int main() {

    // CARTA 1
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000, pontos1 = 50;
    float area1 = 1521.11, densidade1;
    double pib1 = 699280000000;

    // CARTA 2
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000, pontos2 = 30;
    float area2 = 1200.25, densidade2;
    double pib2 = 300500000000;

    // Cálculo da densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    int opcao;

    printf("=== SUPER TRUNFO ===\n");

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");
    printf("%s vs %s\n\n", cidade1, cidade2);

    switch(opcao) {

        case 1: // POPULAÇÃO
            printf("Atributo: Populacao\n");
            printf("%d x %d\n", populacao1, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // ÁREA
            printf("Atributo: Area\n");
            printf("%.2f x %.2f\n", area1, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%.2lf x %.2lf\n", pib1, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo: Pontos Turisticos\n");
            printf("%d x %d\n", pontos1, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE (REGRA INVERTIDA)
            printf("Atributo: Densidade Demografica\n");
            printf("%.2f x %.2f\n", densidade1, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
