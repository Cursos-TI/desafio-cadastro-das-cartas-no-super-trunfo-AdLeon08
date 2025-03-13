#include <stdio.h>

// Definição da estrutura para armazenar os dados da cidade
typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da cidade: ");
    scanf(" %s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", carta1.nome);
    printf("Digite a população: ");
    scanf(" %d", &carta1.populacao);
    printf("Digite a área (em km²): ");
    scanf(" %f", &carta1.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta1.pontos_turisticos);

    // Cálculo dos novos atributos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib * 1000000000 / carta1.populacao;

    // Leitura dos dados da segunda carta
    printf("\nDigite o estado da segunda cidade: ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da cidade: ");
    scanf(" %s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", carta2.nome);
    printf("Digite a população: ");
    scanf(" %d", &carta2.populacao);
    printf("Digite a área (em km²): ");
    scanf(" %f", &carta2.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta2.pontos_turisticos);

    // Cálculo dos novos atributos
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib * 1000000000 / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pib_per_capita);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pib_per_capita);

    return 0;
}
