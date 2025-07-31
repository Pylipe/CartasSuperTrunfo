#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Super Trunfo!\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int População, Pontos;
    char Estado[30], Códigos[30], Cidade[30];
    float Area, PIB;
  // Área para entrada de dados
    printf("Carta 01 \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);
    printf("Digite o Código da sua carta: \n");
    scanf("%s", &Códigos);
    printf("Digite o Nome da Cidade \n");
    scanf(" %[^\n]", &Cidade);
    printf("Digite a População: \n");
    scanf("%d", &População);
    printf("Digite a Área: \n");
    scanf("%f", &Area);
    printf("Digite a PIB: \n");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos);
  // Área para exibição dos dados da cidade
    printf("Estado: %s - Código da Carta: %s - Cidade:%s \n", Estado, Códigos, Cidade);
    printf("Número de População: %d - Área: %f - PIB: %f - Pontos Turísticos %d", População, Area, PIB, Pontos);
return 0;
} 
