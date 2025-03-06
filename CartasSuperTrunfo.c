#include <stdio.h>

int main() {
    char estado1, estado2;
    char cidade1[10], cidade2[10];
    char codigo_carta1[10], codigo_carta2[10];
    int quantidade_populacao1, quantidade_pontos_turisticos1, quantidade_populacao2, quantidade_pontos_turisticos2;
    float area_cidade1, PIB1, area_cidade2, PIB2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;

    // Criação da primeira carta
    printf("olá vamos iniciar a criaçao da primeira carta no super trunfo! \n");

    // Entrada de dados para a primeira carta
    printf("Escolha uma letra de A a H para seu estado: \n");
    scanf("%c", &estado1);

    printf("Adcione um numero de 01 a 04 após a letra do seu estado (Ex.: A01) \n");
    scanf("%s", codigo_carta1);

    printf("Escolha um nome para a sua primeira cidade: \n");
    scanf("%s", cidade1);

    printf("Escolha o número de habitantes da cidade: \n");
    scanf("%d", &quantidade_populacao1);

    printf("Escolha a área da cidade (Km): \n");
    scanf("%f", &area_cidade1);

    printf("Escolha o produto interno bruto da sua cidade \n");
    scanf("%f", &PIB1);

    printf("Escolha o número de pontos turísticos de sua cidade: \n");
    scanf("%d", &quantidade_pontos_turisticos1);

    printf("Sua primeira carta está pronta, vamos criar sua segunda carta\n");

    // Criação da segunda carta
    printf("Escolha uma letra de A a H para seu estado: \n");
    scanf(" %c", &estado2);

    printf("Adcione um numero de 01 a 04 após a letra do seu estado (Ex.: A01) \n");
    scanf("%s", codigo_carta2);

    printf("Escolha um nome para a sua segunda cidade: \n");
    scanf("%s", cidade2);

    printf("Escolha o número de habitantes da cidade: \n");
    scanf("%d", &quantidade_populacao2);

    printf("Escolha a área da cidade (Km): \n");
    scanf("%f", &area_cidade2);

    printf("Escolha o produto interno bruto da sua cidade \n");
    scanf("%f", &PIB2);

    printf("Escolha o número de pontos turísticos de sua cidade: \n");
    scanf("%d", &quantidade_pontos_turisticos2);

    // Cálculo dos PIBs per capita e densidades populacionais
    PIB_per_capita1 = PIB1 / quantidade_populacao1;
    densidade_populacional1 = quantidade_populacao1 / area_cidade1;

    PIB_per_capita2 = PIB2 / quantidade_populacao2;
    densidade_populacional2 = quantidade_populacao2 / area_cidade2;

    // Exibição das cartas
    printf("Veja as duas cartas que você criou \n");

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", quantidade_populacao1);
    printf("Área: %.2f km\n", area_cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", quantidade_pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f \n", PIB_per_capita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", quantidade_populacao2);
    printf("Área: %.2f km\n", area_cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", quantidade_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);

    return 0;
}

    
    
    


