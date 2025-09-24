#include <stdio.h>

int main(){

    //declarando variáveis para a carta 1

    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;

    //declarando variáveis para a carta 2

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;

    //lendo dados da carta 1

    printf("---------CARTA 1 ----------\n");

    printf("\nInsira uma letra de 'A' à 'H': ");
    scanf(" %c", &estado);

    printf("Insira o código da carta de '01' à '04'(ex:A03): ");  //"A" se refere a letra inicial do estado seguido do número
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    //lendo dados da carta 2

    printf("\n---------CARTA 2 ----------\n");

    printf("\nInsira uma letra de 'A' à 'H': ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta de '01' à '04'(ex:A03): ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);
    

    //exebindo dados das cartas

    printf("\nCarta 1: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado, codigo, cidade);
    printf("População: %d \nÁrea: %.2f km²\nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d", populacao, area, pib, pontoTuristico);

    printf("\n\nCarta 2: \nEstado: %c \nCódigo: %s \nNome da Cidade: %s \n", estado2, codigo2, cidade2);
    printf("População: %d \nÁrea: %.2f km² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d", populacao2, area2, pib2, pontoTuristico2);

    return 0;
}