#include <stdio.h>

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int populacao1, populacao2, numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;
    char estado1, estado2, codigo1[4], codigo2[4], nome_cidade1[20], nome_cidade2[20];
    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    double super_poder1, super_poder2;
    int resultado1, resultado2; 
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
    scanf("%f", &pib1);
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
    scanf("%f", &pib2);
    printf("Número de pontos turisticos: ");
    scanf("%i", &numero_de_pontos_turisticos2);
    printf("Área (em km²): ");
    scanf("%f", &area2);

    // Cálculo do PIB per Capita e da Densidade Demografica

    // Cidade 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1; 
    // Cidade 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder

    // Cidade 1
    super_poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pibPerCapita1 + (1.0f / densidade1);
    // Cidade 2
    super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pibPerCapita2 + (1.0f / densidade2);


    // Área para exibição dos dados da cidade

    printf("\n\nCarta 1\n");
    printf("Estado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da cidade: %s", nome_cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1); printf(" km²");
    printf("\nPIB: %.2f", pib1); printf(" bilhões de reais");
    printf("\nNúmero de pontos turisticos: %i", numero_de_pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f", densidade1); printf(" hab/km²");
    printf("\nPIB per Capita: %.2f", pibPerCapita1); printf(" reais");
    printf("\nSuper Poder: %.2f", super_poder1);

    printf("\n\nCarta 2\n");
    printf("Estado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea (em km²): %.2f", area2); printf(" km²");
    printf("\nPIB: %.2f", pib2); printf(" bilhões de reais");
    printf("\nNúmero de pontos turisticos: %i", numero_de_pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f", densidade2); printf(" hab/km²");
    printf("\nPIB per Capita: %.2f", pibPerCapita2); printf(" reais");
    printf("\nSuper Poder: %.2f", super_poder2);

    // Comparação das cartas

    printf("\n\nComparação das cartas\n");
    printf("\nPopulação: Carta 1 venceu (%d)", populacao1 > populacao2);
    printf("\nÁrea: Carta 1 venceu (%d)", area1 > area2);
    printf("\nPIB: Carta 1 venceu (%d)", pib1 > pib2);
    printf("\nNúmero de pontos turisticos: Carta 1 venceu (%d)", numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2);
    printf("\nDensidade Populacional: Carta 1 venceu (%d)", densidade1 < densidade2);
    printf("\nPIB per Capita: Carta 1 venceu (%d)", pibPerCapita1 > pibPerCapita2);
    printf("\nSuper Poder: Carta 1 venceu (%d)", super_poder1 > super_poder2);

    return 0;
}