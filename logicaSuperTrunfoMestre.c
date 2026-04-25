#include <stdio.h>

int main() {

    // CARTA 1
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12325000, pontos1 = 50;
    float area1 = 1521.11, densidade1, pibpercapita1;
    double pib1 = 699280000000;

    // CARTA 2
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000, pontos2 = 30;
    float area2 = 1200.25, densidade2, pibpercapita2;
    double pib2 = 300500000000;

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    int op1, op2;

    printf("=== SUPER TRUNFO ===\n");

    // MENU 1
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
    scanf("%d", &op1);

    // MENU 2 (dinâmico)
    printf("\nEscolha o SEGUNDO atributo:\n");

    switch(op1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade\n6 - PIB per Capita\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade\n6 - PIB per Capita\n");
            break;
        case 5:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per Capita\n");
            break;
        case 6:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float v1_c1, v1_c2, v2_c1, v2_c2;

    // ATRIBUTO 1
    switch(op1) {
        case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
        case 2: v1_c1 = area1; v1_c2 = area2; break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; break;
        case 4: v1_c1 = pontos1; v1_c2 = pontos2; break;
        case 5: v1_c1 = densidade1; v1_c2 = densidade2; break;
        case 6: v1_c1 = pibpercapita1; v1_c2 = pibpercapita2; break;
        default: printf("Erro!\n"); return 0;
    }

    // ATRIBUTO 2
    switch(op2) {
        case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
        case 2: v2_c1 = area1; v2_c2 = area2; break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; break;
        case 4: v2_c1 = pontos1; v2_c2 = pontos2; break;
        case 5: v2_c1 = densidade1; v2_c2 = densidade2; break;
        case 6: v2_c1 = pibpercapita1; v2_c2 = pibpercapita2; break;
        default: printf("Erro!\n"); return 0;
    }

    // COMPARAÇÃO (ternário)
    int vencedor1 = (op1 == 5) ? (v1_c1 < v1_c2 ? 1 : 2)
                              : (v1_c1 > v1_c2 ? 1 : 2);

    int vencedor2 = (op2 == 5) ? (v2_c1 < v2_c2 ? 1 : 2)
                              : (v2_c1 > v2_c2 ? 1 : 2);

    // SOMA
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // RESULTADO
    printf("\n=== RESULTADO ===\n");
    printf("\n%s vs %s\n", cidade1, cidade2);

    printf("\nAtributo 1: %.2f x %.2f\n", v1_c1, v1_c2);
    printf("Atributo 2: %.2f x %.2f\n", v2_c1, v2_c2);

    printf("\nSoma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n", soma2);

    printf("\nVencedor Atributo 1: Carta %d\n", vencedor1);
    printf("Vencedor Atributo 2: Carta %d\n", vencedor2);

    if (soma1 > soma2) {
        printf("\n Vencedor Final: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\n Vencedor Final: %s\n", cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
