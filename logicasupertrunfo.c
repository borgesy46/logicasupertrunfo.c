#include <stdio.h>

int main() {
    
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    int populacao1;
    float area_km2_1;
    float pib_bilhoes1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
 
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2; 
    float area_km2_2;
    float pib_bilhoes2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
 
    int opcao;
    
    printf("--- Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (Ex:A01): ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1); 
    printf("Area (em km2): ");
    scanf("%f", &area_km2_1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib_bilhoes1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
 
    printf("\n--- Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (Ex:A01): ");
    scanf("%s", codigo_carta2); 
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2); 
    printf("Area (em km2): ");
    scanf("%f", &area_km2_2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib_bilhoes2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
 
    densidade_populacional1 = (float)populacao1 / area_km2_1;
    pib_per_capita1 = (pib_bilhoes1 * 1000000000) / populacao1;
 
    densidade_populacional2 = (float)populacao2 / area_km2_2;
    pib_per_capita2 = (pib_bilhoes2 * 1000000000) / populacao2;
 
    printf("\n--- Informacoes das Cartas ---\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area_km2_1);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
 
    printf("\n");
 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area_km2_2);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n--- ESCOLHA O ATRIBUTO PARA COMPARAR ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);
    
    printf("\n--- COMPARACAO DE CARTAS ---\n");
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1: %d habitantes\n", populacao1);
            printf("Carta 2: %d habitantes\n", populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: 
            printf("Atributo: Area\n");
            printf("Carta 1: %.2f km2\n", area_km2_1);
            printf("Carta 2: %.2f km2\n", area_km2_2);
            if (area_km2_1 > area_km2_2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (area_km2_2 > area_km2_1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: 
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f bilhoes\n", pib_bilhoes1);
            printf("Carta 2: %.2f bilhoes\n", pib_bilhoes2);
            if (pib_bilhoes1 > pib_bilhoes2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib_bilhoes2 > pib_bilhoes1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: 
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1: %d pontos\n", pontos_turisticos1);
            printf("Carta 2: %d pontos\n", pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: 
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1: %.2f hab/km2\n", densidade_populacional1);
            printf("Carta 2: %.2f hab/km2\n", densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6: 
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1: %.2f reais\n", pib_per_capita1);
            printf("Carta 2: %.2f reais\n", pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default: 
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 6.\n");
            break;
    }
 
    return 0;
}
