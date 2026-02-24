#include <stdio.h>

int main()
{
    int populacao1 = 165215, populacao2 = 6845184, numero_de_pontos_turisticos1 = 50, numero_de_pontos_turisticos2 = 30;
    char nome_pais1[20] = "Brasil", nome_pais2[20] = "Canadá";
    float area1 = 615321, area2 = 645612, pib1 = 645127653, pib2 = 6513541, densidade1, densidade2;
    int escolha, atributo1, atributo2, soma1 = 0, soma2 = 0;

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("Super Trunfo:\n");
    printf("1. %s\n", nome_pais1);
    printf("2. %s\n", nome_pais2);
    printf("Escolha um País: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nNome do País: %s", nome_pais1);
        printf("\n1. População: %d", populacao1);
        printf("\n2. Área: %.2f", area1);
        printf(" km²");
        printf("\n3. PIB: %.2f", pib1);
        printf(" bilhões de reais");
        printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
        printf("\n5. Densidade Populacional: %.2f", densidade1);
        printf(" hab/km²");
        printf("\nEscolha o primeiro atributo você quer comparar: ");
        scanf("%d", &atributo1);

        switch (atributo1)
        {
        case 1:
            printf("\n2. Área: %.2f", area1);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib1);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
            printf("\n5. Densidade Populacional: %.2f", densidade1);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 2:
            printf("\n1. População: %d", populacao1);
            printf("\n3. PIB: %.2f", pib1);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
            printf("\n5. Densidade Populacional: %.2f", densidade1);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 3:
            printf("\n1. População: %d", populacao1);
            printf("\n2. Área: %.2f", area1);
            printf(" km²");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
            printf("\n5. Densidade Populacional: %.2f", densidade1);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 4:
            printf("\n1. População: %d", populacao1);
            printf("\n2. Área: %.2f", area1);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib1);
            printf(" bilhões de reais");
            printf("\n5. Densidade Populacional: %.2f", densidade1);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 5:
            printf("\n1. População: %d", populacao1);
            printf("\n2. Área: %.2f", area1);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib1);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos1);
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        default:
            printf("\nEscolha inválida!");
            break;
        }
        break;
    case 2:
        printf("\nNome da cidade: %s", nome_pais2);
        printf("\n1. População: %d", populacao2);
        printf("\n2. Área: %.2f", area2);
        printf(" km²");
        printf("\n3. PIB: %.2f", pib2);
        printf(" bilhões de reais");
        printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
        printf("\n5. Densidade Populacional: %.2f", densidade2);
        printf(" hab/km²");
        printf("\nEscolha o primeiro atributo você quer comparar: ");
        scanf("%d", &atributo1);

        switch (atributo1)
        {
        case 1:
            printf("\n2. Área: %.2f", area2);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib2);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
            printf("\n5. Densidade Populacional: %.2f", densidade2);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 2:
            printf("\n1. População: %d", populacao2);
            printf("\n3. PIB: %.2f", pib2);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
            printf("\n5. Densidade Populacional: %.2f", densidade2);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 3:
            printf("\n1. População: %d", populacao2);
            printf("\n2. Área: %.2f", area2);
            printf(" km²");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
            printf("\n5. Densidade Populacional: %.2f", densidade2);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 4:
            printf("\n1. População: %d", populacao2);
            printf("\n2. Área: %.2f", area2);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib2);
            printf(" bilhões de reais");
            printf("\n5. Densidade Populacional: %.2f", densidade2);
            printf(" hab/km²");
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
            break;
        case 5:
            printf("\n1. População: %d", populacao2);
            printf("\n2. Área: %.2f", area2);
            printf(" km²");
            printf("\n3. PIB: %.2f", pib2);
            printf(" bilhões de reais");
            printf("\n4. Número de pontos turisticos: %i", numero_de_pontos_turisticos2);
            printf("\nEscolha o segundo atributo você quer comparar: ");
            scanf("%d", &atributo2);
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

    printf("\n\nComparação:\n");
    escolha == 1 ? printf("%s (Escohido) X %s\n", nome_pais1, nome_pais2) : printf("%s X %s (Escohido)\n", nome_pais1, nome_pais2);

    printf("\nAtributos escolhidos:\n");
    switch (atributo1)
    {
    case 1:
        printf("População e ");
        break;
    case 2:
        printf("Área e ");
        break;
    case 3:
        printf("PIB e ");
        break;
    case 4:
        printf("Número de pontos turisticos e ");
        break;
    case 5:
        printf("Densidade Populacional e ");
        break;
    }
    switch (atributo2)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Número de pontos turisticos\n");
        break;
    case 5:
        printf("Densidade Populacional\n");
        break;
    }

    switch (atributo1)
    {
    case 1:
        printf("População: %d X %d", populacao1, populacao2);
        break;
    case 2:
        printf("Área: %.2f X %.2f", area1, area2);
        break;
    case 3:
        printf("PIB: %.2f X %.2f", pib1, pib2);
        break;
    case 4:
        printf("Pontos Turisticos: %d X %d", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
        break;
    case 5:
        printf("Densidade: %.2f X %.2f", densidade1, densidade2);
        break;
    default:
        break;
    }

    switch (atributo2)
    {
    case 1:
        printf("\nPopulação: %d X %d", populacao1, populacao2);
        break;
    case 2:
        printf("\nÁrea: %.2f X %.2f", area1, area2);
        break;
    case 3:
        printf("\nPIB: %.2f X %.2f", pib1, pib2);
        break;
    case 4:
        printf("\nPontos Turisticos: %d X %d", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
        break;
    case 5:
        printf("\nDensidade: %.2f X %.2f", densidade1, densidade2);
        break;
    }

    if (atributo1 == 1 || atributo2 == 1){
        if (populacao1 > populacao2){
            soma1++;
        }else if (populacao1 < populacao2){
            soma2++;
        }
    } 
    if (atributo1 == 2 || atributo2 == 2){
        if (area1 > area2){
            soma1++;
        }else if (area1 < area2){
            soma2++;
        }
    } 
    if (atributo1 == 3 || atributo2 == 3){
        if (pib1 > pib2){
            soma1++;
        }else if (pib1 < pib2){
            soma2++;
        }
    } 
    if (atributo1 == 4 || atributo2 == 4){
        if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            soma1++;
        }else if(numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
            soma2++;
        }
    } 
    if (atributo1 == 5 || atributo2 == 5){
        if (densidade1 < densidade2){
            soma1++;
        }else if (densidade1 > densidade2){
            soma2++;
        }
    }

    printf("\nSoma carta 1: %d", soma1);
    printf("\nSoma carta 2: %d", soma2);

    if (soma1 > soma2)
    {
        printf("\nA carta 1 venceu!");
        switch (escolha)
        {
        case 1:
            printf("\nParabéns era sua carta e você GANHOU!!");
            break;
        default:
            printf("\nInfelizmente não era sua carta e você PERDEU!!");
            break;
        }
    }
    else if (soma1 < soma2)
    {
        printf("\nA carta 2 venceu!");
        
        switch (escolha)
        {
        case 1:
            printf("\nInfelizmente não era sua carta e você PERDEU!!");
            break;
        default:
            printf("\nParabéns era sua carta e você GANHOU!!");
            break;
        }
    }
    else
    {
        printf("\nEmpate!");
    }

    return 0;
}