#include <stdio.h>

int main(){

    //declarando variáveis para a carta 1

    char estado;
    char codigo[5];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidade;
    float pibPerCapita;
    float superPoder;

    //declarando variáveis para a carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    //lendo dados da carta 1

    printf("---------CARTA 1 ----------\n");

    printf("\nInsira uma letra de 'A' à 'H': ");
    scanf(" %c", &estado);

    printf("Insira o código da carta de '01' à '04'(ex:A03): ");  //"A" se refere a letra inicial do estado seguido do número
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%lu", &populacao);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: ");
    scanf(" %f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    densidade = populacao / area;
    pibPerCapita = pib / populacao;
    superPoder = (float)populacao + area + pib + pontoTuristico + pibPerCapita + (1.0f / densidade);
    

    //lendo dados da carta 2

    printf("\n---------CARTA 2 ----------\n");

    printf("\nInsira uma letra de 'A' à 'H': ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta de '01' à '04'(ex:A03): ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Insira a área da cidade em km²: ");
    scanf(" %f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2 + (1.0f / densidade2);
    

    //exebindo dados das cartas
    
    printf("\nCarta 1: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado, codigo, cidade);
    printf("População: %lu \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d", populacao, area, pib, pontoTuristico);
    printf("\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade, pibPerCapita, superPoder);

    printf("\n\nCarta 2: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado2, codigo2, cidade2);
    printf("População: %lu \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d", populacao2, area2, pib2, pontoTuristico2);
    printf("\nDensidade Populacional: %.2f hab/km² \nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    // comparação dos atributos

    printf("\n\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico > pontoTuristico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

 
    return 0;
}