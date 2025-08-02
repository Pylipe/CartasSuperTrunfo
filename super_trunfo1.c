#include <stdio.h>

int main() {
    // Cabeçalho do jogo
    printf("===== Cadastro de Cartas - Super Trunfo de Países =====\n\n");

    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[30];
    int populacao1, pontos1;
    float area1, pib1;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    getchar(); // limpa o buffer
    scanf("%[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[30];
    int populacao2, pontos2;
    float area2, pib2;

    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    getchar(); // limpa o buffer
    scanf("%[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição das informações das cartas
    printf("\n===== Cartas Cadastradas =====\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
