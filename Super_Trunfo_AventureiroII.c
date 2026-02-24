#include <stdio.h>

int main()
{
    int populacao1 = 165215, populacao2 = 6845184, numero_de_pontos_turisticos1 = 50, numero_de_pontos_turisticos2 = 30;
    char nome_pais1[20] = "Brasil", nome_pais2[20] = "Canadá";
    float area1 = 615321, area2 = 645612, pib1 = 645127653, pib2 = 6513541, densidade1, densidade2;
    int escolha, atributo;

    // Cidade 1
    densidade1 = populacao1 / area1;
    // Cidade 2
    densidade2 = populacao2 / area2;

    printf("Super Trunfo:\n");
    printf("1. %s\n", nome_pais1);
    printf("2. %s\n", nome_pais2);
    printf("Escolha um País: ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("\nNome do País: %s", nome_pais1);
        printf("\n1. População: %d", populacao1);
        printf("\n2. Área: %.2f", area1);printf(" km²");
        printf("\n3. PIB: %.2f", pib1);printf(" bilhões de reais");
        printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
        printf("\n5. Densidade Populacional: %.2f", densidade1);printf(" hab/km²");
        printf("\nEscolha qual atributo você quer comparar: ");
        scanf("%d", &atributo);

        printf("\n\nComparação:\n");
        printf("País: %s\n", nome_pais1);
        
        switch (atributo){
        case 1:
            printf("Atributo utilizado na comparação: População\n");
            printf("População Carta 1 (Escolhida): %d - População Carta 2: %d\n", populacao1, populacao2);

            if(populacao1 == populacao2){
                printf("\nEmpate!");
            } else if(populacao1 > populacao2){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 2:
            printf("Atributo utilizado na comparação: Área\n");
            printf("Área Carta 1 (escolhida): %.2f - Área Carta 2: %.2f\n", area1, area2);

            if(area1 == area2){
                printf("\nEmpate!");
            } else if(area1 > area2){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 3:
            printf("Atributo utilizado na comparação: PIB\n");
            printf("PIB Carta 1 (escolhida): %.2f - PIB Carta 2: %.2f\n", pib1, pib2);

            if(pib1 == pib2){
                printf("\nEmpate!");
            } else if(pib1 > pib2){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 4:
            printf("Atributo utilizado na comparação: Número de Pontos Turisticos\n");
            printf("Número de Pontos Turisticos Carta 1 (escolhida): %d - Número de Pontos Turisticos Carta 2: %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);

            if(numero_de_pontos_turisticos1 == numero_de_pontos_turisticos2){
                printf("\nEmpate!");
            } else if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 5:
            printf("Atributo utilizado na comparação: Densidade\n");
            printf("Densidade Carta 1 (escolhida): %.2f - Densidade Carta 2: %.2f\n", densidade1, densidade2);

            if(densidade1 == densidade2){
                printf("\nEmpate!");
            } else if(densidade1 < densidade2){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        default:
            printf("\nEscolha inválida!");
            break;
        }
        break;
    case 2:
        printf("\nNome da cidade: %s", nome_pais2);
        printf("\n1. População: %d", populacao2);
        printf("\n2. Área: %.2f", area2);printf(" km²");
        printf("\n3. PIB: %.2f", pib2);printf(" bilhões de reais");
        printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
        printf("\n5. Densidade Populacional: %.2f", densidade2);printf(" hab/km²");
        printf("\nEscolha qual atributo você quer comparar: ");
        scanf("%d", &atributo);

        printf("\n\nComparação:\n");
        printf("País: %s\n", nome_pais2);

        switch (atributo){
        case 1:
            printf("Atributo utilizado na comparação: População\n");
            printf("População Carta 1: %d - População Carta 2 (Escolhida): %d\n", populacao1, populacao2);

            if(populacao2 == populacao1){
                printf("\nEmpate!");
            } else if(populacao2 > populacao1){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 2:
            printf("Atributo utilizado na comparação: Área\n");
            printf("Área Carta 1: %.2f - Área Carta 2 (escolhida): %.2f\n", area1, area2);

            if(area2 == area1){
                printf("\nEmpate!");
            } else if(area2 > area1){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 3:
            printf("Atributo utilizado na comparação: PIB\n");
            printf("PIB Carta 1: %.2f - PIB Carta 2 (escolhida): %.2f\n", pib1, pib2);

            if(pib2 == pib1){
                printf("\nEmpate!");
            } else if(pib2 > pib1){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 4:
            printf("Atributo utilizado na comparação: Número de Pontos Turisticos\n");
            printf("Número de Pontos Turisticos Carta 1: %d - Número de Pontos Turisticos Carta 2 (escolhida): %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);

            if(numero_de_pontos_turisticos2 == numero_de_pontos_turisticos1){
                printf("\nEmpate!");
            } else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        case 5:
            printf("Atributo utilizado na comparação: Densidade\n");
            printf("Densidade Carta 1: %.2f - Densidade Carta 2 (escolhida): %.2f\n", densidade1, densidade2);

            if(densidade2 == densidade1){
                printf("\nEmpate!");
            } else if(densidade2 < densidade1){
                printf("\nVocê ganhou!");
            } else{
                printf("\nVocê Perdeu!");
            }
            break;
        default:
            printf("\nEscolha inválida!");
            break;
        }
        break;
    default:
        printf("\nEscolha inválida!");
        break;
    }
    
    return 0;
}