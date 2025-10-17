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


// --- cálculos ---
    densidade = (area != 0.0f) ? ((float)populacao / area) : 0.0f;
    densidade2 = (area2 != 0.0f) ? ((float)populacao2 / area2) : 0.0f;

    pibPerCapita = (populacao != 0UL) ? (pib / (float)populacao) : 0.0f;
    pibPerCapita2 = (populacao2 != 0UL) ? (pib2 / (float)populacao2) : 0.0f;

    // --- exibição resumida das cartas ---
    printf("\n\nCarta 1: %s (%c) — Pop: %lu, Área: %.2f, PIB: %.2f, Pontos: %d, Dens: %.2f, PIBpc: %.6f\n",
        cidade, estado, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);

    printf("Carta 2: %s (%c) — Pop: %lu, Área: %.2f, PIB: %.2f, Pontos: %d, Dens: %.2f, PIBpc: %.6f\n",
        cidade2, estado2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);

    // --- menu interativo ---
    int opcao = -1;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: { // População
            printf("\nComparação (Atributo: População)\n");
            printf("Carta 1 - %s: %lu\n", cidade, populacao);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

            if (populacao == populacao2) {
                printf("Resultado: Empate!\n");
            } else {
                if (populacao > populacao2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                else
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        }
        case 2: { // Área
            printf("\nComparação (Atributo: Área)\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade, area);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

            if (area == area2) {
                printf("Resultado: Empate!\n");
            } else {
                if (area > area2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                else
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        }
        case 3: { // PIB
            printf("\nComparação (Atributo: PIB)\n");
            printf("Carta 1 - %s: %.2f\n", cidade, pib);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib2);

            if (pib == pib2) {
                printf("Resultado: Empate!\n");
            } else {
                if (pib > pib2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                else
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        }
        case 4: { // Pontos Turísticos
            printf("\nComparação (Atributo: Pontos Turísticos)\n");
            printf("Carta 1 - %s: %d\n", cidade, pontoTuristico);
            printf("Carta 2 - %s: %d\n", cidade2, pontoTuristico2);

            if (pontoTuristico == pontoTuristico2) {
                printf("Resultado: Empate!\n");
            } else {
                if (pontoTuristico > pontoTuristico2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                else
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        }
        case 5: { // Densidade (menor vence)
            printf("\nComparação (Atributo: Densidade Populacional)\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade, densidade);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade == densidade2) {
                printf("Resultado: Empate!\n");
            } else {
                if (densidade < densidade2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                else
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            }
            break;
        }
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida. Reinicie o programa e escolha uma opção válida.\n");
            break;
    }
    return 0;
}