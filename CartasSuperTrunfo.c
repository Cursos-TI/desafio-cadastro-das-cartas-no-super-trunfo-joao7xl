#include<stdio.h>

int main () {

    char estado;
    char codigoCarta[3];
    char nomeCidade[30];
    int populacao;
    float areaKm;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional1;
    float pibPerCapita;
    float superPoder;

    printf("Insira a Letra Inicial do Estado e o Código: \n");
    scanf(" %c", &estado);
    scanf("%2s", &codigoCarta);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Insira a população: \n");
    scanf("%d", &populacao);

    printf("Qual área em km²: \n");
    scanf("%f", &areaKm);

    printf("Qual o pib do estado: \n");
    scanf("%f", &pib);
    
    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional1 = (populacao + areaKm) / 2;
    pibPerCapita = (pib + populacao) / 2;

    superPoder = populacao + areaKm + pib + pontosTuristicos + densidadePopulacional1 + pibPerCapita;

    char estado2;
    char codigoCarta2[3];
    char nomeCidade2[30];
    int populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("\nInsira a letra inicial do estado 2 e o codigo: \n");
    scanf(" %c", &estado2);
    scanf("%2s", &codigoCarta2);

    printf("Insira o nome da cidade 2: \n");
    scanf("%s", &nomeCidade2);

    printf("Insira a população 2: \n");
    scanf("%d", &populacao2);
    
    printf("Qual a área em km² do estado 2: \n");
    scanf("%f", &areaKm2);

    printf("Qual pib do estado: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (populacao + areaKm) / 2;
    pibPerCapita2 = (pib + populacao) / 2;

    superPoder2 = populacao2 + areaKm2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + pibPerCapita2;

    printf("\nInicial do estado 1: %c \nCódigo: %2s \n", estado, codigoCarta);
    printf("Cidade: %s \nPopulação: %d \n", nomeCidade, populacao);
    printf("Área km²: %.2f km²\nPIB: %.2f bilhões de reais\n", areaKm, pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita);
    printf("O super poder da carta 1 é: %.2f\n", superPoder);

    printf("\nInicial do estado 2: %c \nCódigo 2: %2s \n", estado2, codigoCarta2);
    printf("Cidade 2: %s \nPopulação 2: %d \n", nomeCidade2, populacao2);
    printf("Área km² 2: %.2f km²\nPIB 2: %.2f bilhões de reais\n", areaKm2, pib2);
    printf("Quantidade de pontos turísticos 2: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("O super poder da carta 2 é: %.2f\n", superPoder2);

    printf("\n***Se o resultado for 1 a carta 01 venceu e se for 0 a carta 00 venceu***\n");
    printf("População 1 vs População 2: %d\n", populacao >= populacao2);
    printf("Área km² 1 vs Área km² 2: %f\n", areaKm >= areaKm2);
    printf("PIB 1 vs PIB 2: %f\n", pib >= pib2);
    printf("Pontos Turísticos 1 vs Pontos Turísticos 2: %d\n", pontosTuristicos >= pontosTuristicos2);
    printf("Densidade 1 vs Densidade 2: %f\n", densidadePopulacional1 >= densidadePopulacional2);
    printf("PIB per capita 1 vs PIB per capita 2: %f\n", pibPerCapita >= pibPerCapita2);

    return 0;

}