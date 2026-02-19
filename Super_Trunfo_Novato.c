#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao1, populacao2, numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[20], nome_cidade2[20];
    float area1, area2, PIB1, PIB2;
    
    // Área para entrada de dados
    
    printf("Carta 1\n");

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%3s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("PIB (Em bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Número de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos1);
    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("Carta 2\n");

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%3s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("PIB (Em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Número de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos2);
    printf("Área (em km²): ");
    scanf("%f", &area2);

    // Área para exibição dos dados da cidade

    printf("\nCarta 1\n");
    printf("Estado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da cidade: %s", nome_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1); printf(" km²");
    printf("\nPIB: %.2f", PIB1); printf(" bilhões de reais");
    printf("\nNúmero de pontos turisticos: %i", numero_de_pontos_turisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea (em km²): %.2f", area2); printf(" km²");
    printf("\nPIB: %.2f", PIB2); printf(" bilhões de reais");
    printf("\nNúmero de pontos turisticos: %i", numero_de_pontos_turisticos2);

    return 0;
}