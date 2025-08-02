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
