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
 
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else {
        printf("Carta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }
 
    return 0;
}
