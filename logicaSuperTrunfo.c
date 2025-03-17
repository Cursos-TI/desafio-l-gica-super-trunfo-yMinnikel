#include <stdio.h> 
#include <string.h> //remover depois

int main(){
    
    //definindo as variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2, pibPerCapita1, pibPerCapita2;
    int pontos1, pontos2;
    float superPoder1, superPoder2;

    //monta a primeira carta
    // printf("----------MONTE A PRIMEIRA CARTA----------\n");
    // printf("Informe a letra que representa o estado: ");
    // scanf("%c", &estado1); //armazena a letra do estado

    // printf("Informe o código da carta: ");
    // scanf("%s", &codigo1); //armazena o código da carta

    // printf("Informe o nome da cidade: ");
    // scanf("%s", &cidade1); //armazena o nome da cidade

    // printf("Informe a população da cidade: ");
    // scanf("%lu", &populacao1); //armazena a população da cidade

    // printf("Informe a área da cidade: ");
    // scanf("%f", &area1); //armazena a área da cidade

    // printf("Informe o PIB da cidade: ");
    // scanf("%f", &pib1); //armazena o PIB da cidade

    // printf("Informe a quantidade de pontos turísticos da cidade: ");
    // scanf("%d", &pontos1); //armazena a quantidade de pontos turísticos da cidade

    estado1 = 'A'; //armazena a letra do estado
    strcpy(codigo1, "A01"); //armazena o código da carta
    strcpy(cidade1, "Cacoal"); //armazena o nome da cidade
    populacao1 = 86887; 
    area1 = 3793;
    pib1 = 2800000000;
    pontos1 = 22;

    densidade1 = (float) populacao1 / area1; //calcula a densidade populacional
    pibPerCapita1 = (float) pib1 / populacao1; //calcula o PIB per capita
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontos1 + pibPerCapita1 + (1/densidade1); //calcula o super poder da carta1
    
    //monta a segunda carta
    //printf("\n----------MONTE A SEGUNDA CARTA----------\n");
    // printf("Informe a letra que representa o estado: ");
    // scanf(" %c", &estado2); //armazena a letra do estado

    // printf("Informe o código da carta: ");
    // scanf("%s", &codigo2); //armazena o código da carta

    // printf("Informe o nome da cidade: ");
    // scanf("%s", &cidade2); //armazena o nome da cidade

    // printf("Informe a população da cidade: ");
    // scanf("%lu", &populacao2); //armazena a população da cidade

    // printf("Informe a área da cidade: ");
    // scanf("%f", &area2); //armazena a área da cidade

    // printf("Informe o PIB da cidade: ");
    // scanf("%f", &pib2); //armazena o PIB da cidade

    // printf("Informe a quantidade de pontos turísticos da cidade: ");
    // scanf("%d", &pontos2); //armazena a quantidade de pontos turísticos da cidade

    estado2 = 'B'; //armazena a letra do estado
    strcpy(codigo2, "B02"); //armazena o código da carta
    strcpy(cidade2, "Ji-Paraná"); //armazena o nome da cidade
    populacao2 = 130009; 
    area2 = 6897;
    pib2 = 3500000000;
    pontos2 = 15;

    densidade2 = (float) populacao2 / area2; //calcula a densidade populacional
    pibPerCapita2 = (float) pib2 / populacao2; //calcula o PIB per capita
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontos2 + pibPerCapita2 + (1/densidade2); //calcula o super poder da carta2

    //exibe a primeira carta
    printf("\nPrimeira carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %lu", estado1, codigo1, cidade1, populacao1);
    printf("\nÁrea(km2): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d", area1, pib1, pontos1);
    printf("\nDensidade populacional: %.2f \nPIB per capita: %.2f \nSuper poder: %.4f \n", densidade1, pibPerCapita1, superPoder1);

    //exibe a segunda carta
    printf("\nSegunda carta \nEstado: %c \nCódigo: %s \nNome da cidade: %s \nPopulação: %lu", estado2, codigo2, cidade2, populacao2);
    printf("\nÁrea(km²): %.3f \nPIB: %.2f \nNúmero de pontos turísticos: %d", area2, pib2, pontos2);
    printf("\nDensidade populacional: %.2f \nPIB per capita: %.2f \nSuper poder: %.4f \n", densidade2, pibPerCapita2, superPoder2);

    int atributo1, atributo2, resultado1, resultado2;
    char a1[25], a2[25];
    //menu de escolha do atributo para a comparação
    printf("Escolha o primeiro atributo de comparação das cartas:");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Pontos turísticos");
    printf("\n5 - Densidade populacional");
    printf("\n6 - PIB per capita");
    printf("\n7 - Super poder\n");    
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        resultado1 = (populacao1 > populacao2) ? 1 : 0;
        strcpy(a1, "População");
        break;
    case 2:
        resultado1 = (area1 > area2) ? 1 : 0;
        strcpy(a1, "Área");
        break;
    case 3:
        resultado1 = (pib1 > pib2) ? 1 : 0;
        strcpy(a1, "PIB");
        break;
    case 4:
        resultado1 = (pontos1 > pontos2) ? 1 : 0;
        strcpy(a1, "Pontos turísticos");
        break;
    case 5:
        resultado1 = (densidade1 < densidade2) ? 1 : 0;
        strcpy(a1, "Densidade populacional");
        break;
    case 6:
        resultado1 = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
        strcpy(a1, "PIB per capita");
        break;
    case 7:
        resultado1 = (superPoder1 > superPoder2) ? 1 : 0;
        strcpy(a1, "Super poder");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo de comparação das cartas:");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - Pontos turísticos");
    printf("\n5 - Densidade populacional");
    printf("\n6 - PIB per capita");
    printf("\n7 - Super poder\n");    
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Atributo já escolhido!\n");
    } else {
        
        switch (atributo2)
        {
        case 1:
            resultado2 = (populacao1 > populacao2) ? 1 : 0;
            strcpy(a2, "População");
            break;
        case 2:
            resultado2 = (area1 > area2) ? 1 : 0;
            strcpy(a2, "Área");
            break;
        case 3:
            resultado2 = (pib1 > pib2) ? 1 : 0;
            strcpy(a2, "PIB");
            break;
        case 4:
            resultado2 = (pontos1 > pontos2) ? 1 : 0;
            strcpy(a2, "Pontos turísticos");
            break;
        case 5:
            resultado2 = (densidade1 < densidade2) ? 1 : 0;
            strcpy(a2, "Densidade populacional");
            break;
        case 6:
            resultado2 = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
            strcpy(a2, "PIB per capita");
            break;
        case 7:
            resultado2 = (superPoder1 > superPoder2) ? 1 : 0;
            strcpy(a2, "Super poder");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }
    
    if(atributo1 == atributo2){
        printf("Atributo já escolhido!\n");
    } else{
        printf("Confronto entre %s e %s\n", cidade1, cidade2);
        printf("Os atributos escolhidos foram %s e %s\n", a1, a2);
        switch(atributo1){
            case 1:
                printf("População de %s: %lu\n", cidade1, populacao1);
                printf("População de %s: %lu\n", cidade2, populacao2);
                break;
            case 2:
                printf("Área de %s: %.3f\n", cidade1, area1);
                printf("Área de %s: %.3f\n", cidade2, area2);
                break;
            case 3:
                printf("PIB de %s: %.2f\n", cidade1, pib1);
                printf("PIB de %s: %.2f\n", cidade2, pib2);
                break;
            case 4:
                printf("Pontos turísticos de %s: %d\n", cidade1, pontos1);
                printf("Pontos turísticos de %s: %d\n", cidade2, pontos2);
                break;
            case 5:
                printf("Densidade populacional de %s: %.2f\n", cidade1, densidade1);
                printf("Densidade populacional de %s: %.2f\n", cidade2, densidade2);
                break;
            case 6:
                printf("PIB per capita de %s: %.2f\n", cidade1, pibPerCapita1);
                printf("PIB per capita de %s: %.2f\n", cidade2, pibPerCapita2);
                break;
            case 7:
                printf("Super poder de %s: %.4f\n", cidade1, superPoder1);
                printf("Super poder de %s: %.4f\n", cidade2, superPoder2);
                break;
        }
        switch (atributo2){
            case 1:
                printf("População de %s: %lu\n", cidade1, populacao1);
                printf("População de %s: %lu\n", cidade2, populacao2);
                break;
            case 2:
                printf("Área de %s: %.3f\n", cidade1, area1);
                printf("Área de %s: %.3f\n", cidade2, area2);
                break;
            case 3:
                printf("PIB de %s: %.2f\n", cidade1, pib1);
                printf("PIB de %s: %.2f\n", cidade2, pib2);
                break;
            case 4:
                printf("Pontos turísticos de %s: %d\n", cidade1, pontos1);
                printf("Pontos turísticos de %s: %d\n", cidade2, pontos2);
                break;
            case 5:
                printf("Densidade populacional de %s: %.2f\n", cidade1, densidade1);
                printf("Densidade populacional de %s: %.2f\n", cidade2, densidade2);
                break;
            case 6:
                printf("PIB per capita de %s: %.2f\n", cidade1, pibPerCapita1);
                printf("PIB per capita de %s: %.2f\n", cidade2, pibPerCapita2);
                break;
            case 7:
                printf("Super poder de %s: %.4f\n", cidade1, superPoder1);
                printf("Super poder de %s: %.4f\n", cidade2, superPoder2);
                break;
        }
        if (resultado1 && resultado2){
            printf("Carta 1 venceu!\n");
        } else if (resultado1 != resultado2){
            printf("Empate!\n");
        } else {
            printf("Carta 2 venceu!\n");
        }
    }
    
    return 0;
}