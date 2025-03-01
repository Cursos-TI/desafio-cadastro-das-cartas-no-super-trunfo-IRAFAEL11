#include <stdio.h>


int main() {
    
    
    char estado1 , estado2;
    char cidade1 [10], cidade2 [10];
    char codigo_carta1 [10], codigo_carta2 [10];
    int quantidade_populacao1, quantidade_pontos_turisticos1, quantidade_populacao2, quantidade_pontos_turisticos2;
    float area_cidade1, PIB1, area_cidade2, PIB2;

    // Criação da primeira carta:
    printf ("olá vamos iniciar a criaçao da primeira carta no super trunfo! \n");


    // Entrada de saida de dados com 'printf' e saida de dados com 'scanf'
    printf ("escolha uma letra de A a H para seu estado: \n");
    scanf ("%c, &estado");

    printf ("Adcione um numero de 01 a 04 após a letra do seu estado (Ex.: A01 \n");
    scanf ("%s", codigo_carta1);

    printf ("Escolha um nome para a sua primeira cidade: \n");
    scanf ("%s", cidade1);

    printf ("Escolha o núnemro de habitantes da cidade: \n");
    scanf ("%d", &quantidade_populacao1);

    printf ("Escolha a area da cidade (Km): \n");
    scanf ("%f", &area_cidade1);

    printf ("Escolha o produto inteiro bruto da sua cidade \n");
    scanf ("%f", &PIB1);

    printf ("Escolha o numeto de pontos turisticos de sua cidade: \n");
    scanf ("%d", &quantidade_pontos_turisticos1);



    // Criaçao da segunda carta:
    printf ("sua primeira carta esta pronta! vamos criar sua segunda carta \n");

    printf ("escolha uma letra de A a H para seu estado: \n");
    scanf ("%c, &estado");

    printf ("Adcione um numero de 01 a 04 após a letra do seu estado (Ex.: A01 \n");
    scanf ("%s", codigo_carta2);

    printf ("Escolha um nome para a sua primeira cidade: \n");
    scanf ("%s", cidade2);

    printf ("Escolha o núnemro de habitantes da cidade: \n");
    scanf ("%d", &quantidade_populacao2);

    printf ("Escolha a area da cidade (Km): \n");
    scanf ("%f", &area_cidade2);

    printf ("Escolha o produto inteiro bruto da sua cidade \n");
    scanf ("%f", &PIB1);

    printf ("Escolha o numeto de pontos turisticos de sua cidade: \n");
    scanf ("%d", &quantidade_pontos_turisticos2);

    // Exibiçao das 2 cartas 
    printf ("Veja as duas cartas que você criou \n");

    printf ("\n");

    printf ("Carta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %s\n", codigo_carta1);
    printf ("nome da cidade: %s\n", cidade1);
    printf ("Populacao: %d\n", quantidade_populacao1);
    printf ("Área: %.2f km\n", area_cidade1);
    printf ("PIB: %2f bilhões de reais\n", PIB1);
    printf ("Numero de pontos turisticos :%d\n", quantidade_pontos_turisticos1);
    
    //Linha em branco para separar as cartas
    printf ("\n");

    printf ("Carta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Codigo: %s\n", codigo_carta2);
    printf ("nome da cidade: %s\n", cidade2);
    printf ("Populacao: %d\n", quantidade_populacao2);
    printf ("Área: %.2f km\n", area_cidade2);
    printf ("PIB: %2f bilhões de reais\n", PIB2);
    printf ("Numero de pontos turisticos :%d\n", quantidade_pontos_turisticos2);

    return 0;







    




    
}
