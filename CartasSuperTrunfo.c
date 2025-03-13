#include <stdio.h>

int main() {
    // Definição das variáveis
    char estado1[3], estado2[3], codigo1[10], codigo2[10], nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Leitura dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^"]s", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^"]s", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Cálculo do Super Poder (soma dos atributos, incluindo o inverso da densidade populacional)
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    
    // Exibição dos resultados da comparação
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
    
    return 0;
}
