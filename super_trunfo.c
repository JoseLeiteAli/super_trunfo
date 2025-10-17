#include <stdio.h>

int main() {
    // --- declaração das variáveis (cartas) ---
    char codigo[5];
    char pais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontoTuristico;
    float densidade;
    float pibPerCapita;

    char codigo2[5];
    char pais2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densidade2;
    float pibPerCapita2;


    // --- leitura carta 1 ---
    printf("---------CARTA 1 ----------\n");
    printf("Insira o código da carta (ex:A03): ");
    scanf(" %4s", codigo);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", pais);

    printf("Insira o número de habitantes do país: ");
    scanf("%lu", &populacao);

    printf("Insira a área do país em km²: ");
    scanf("%f", &area);

    printf("Insira o PIB do país: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    // --- leitura carta 2 ---
    printf("\n---------CARTA 2 ----------\n");
    printf("Insira o código da carta (ex:B01): ");
    scanf(" %4s", codigo2);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", pais2);

    printf("Insira o número de habitantes do país: ");
    scanf("%lu", &populacao2);

    printf("Insira a área do país em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB do país: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    // --- cálculos derivados (
    densidade  = (area  != 0.0f) ? ((float)populacao  / area)  : 0.0f;
    densidade2 = (area2 != 0.0f) ? ((float)populacao2 / area2) : 0.0f;

    pibPerCapita  = (populacao  != 0UL) ? (pib  / (float)populacao)  : 0.0f;
    pibPerCapita2 = (populacao2 != 0UL) ? (pib2 / (float)populacao2) : 0.0f;

    // --- exibição resumida ---
    printf("\n\nCarta 1: %s — Pop: %lu, Área: %.2f, PIB: %.2f, Pontos: %d, Dens: %.2f, PIBpc: %.6f\n",
           pais, populacao, area, pib, pontoTuristico, densidade, pibPerCapita);
    printf("Carta 2: %s — Pop: %lu, Área: %.2f, PIB: %.2f, Pontos: %d, Dens: %.2f, PIBpc: %.6f\n\n",
           pais2, populacao2, area2, pib2, pontoTuristico2, densidade2, pibPerCapita2);

    // --- menu 1 (switch) 
    int first = -1;
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &first);

    // comparar atributo 1 usando switch + operador ternário
    int res1 = 0; // 1 carta1 vence, 2 carta2 vence, 0 empate
    switch (first) {
        case 1:
            res1 = (populacao > populacao2) ? 1 : (populacao < populacao2 ? 2 : 0);
            break;
        case 2:
            res1 = (area > area2) ? 1 : (area < area2 ? 2 : 0);
            break;
        case 3:
            res1 = (pib > pib2) ? 1 : (pib < pib2 ? 2 : 0);
            break;
        case 4:
            res1 = (pontoTuristico > pontoTuristico2) ? 1 : (pontoTuristico < pontoTuristico2 ? 2 : 0);
            break;
        case 5:
            res1 = (densidade < densidade2) ? 1 : (densidade > densidade2 ? 2 : 0); // menor vence
            break;
        default:
            printf("Opção inválida para o primeiro atributo. Encerrando.\n");
            return 0;
    }

    // --- menu 2 (opções todas visíveis) ---
    int second = -1;
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &second);

    if (second == first) {
        printf("Você escolheu o mesmo atributo duas vezes. Reinicie e escolha atributos diferentes.\n");
        return 0;
    }

    // --- comparar atributo 2 usando switch + operador ternário ---
    int res2 = 0;
    switch (second) {
        case 1: 
            res2 = (populacao > populacao2) ? 1 : (populacao < populacao2 ? 2 : 0); 
            break;
        case 2:
            res2 = (area > area2) ? 1 : (area < area2 ? 2 : 0); 
            break;
        case 3: 
            res2 = (pib > pib2) ? 1 : (pib < pib2 ? 2 : 0); 
            break;
        case 4: 
            res2 = (pontoTuristico > pontoTuristico2) ? 1 : (pontoTuristico < pontoTuristico2 ? 2 : 0); 
            break;
        case 5: 
            res2 = (densidade < densidade2) ? 1 : (densidade > densidade2 ? 2 : 0); 
            break;
        default:
            printf("Opção inválida para o segundo atributo. Encerrando.\n");
            return 0;
    }

    // --- exibir detalhes e resultados ---
    const char *name1 = (first==1) ? "População" : (first==2) ? "Área" : (first==3) ? "PIB" : (first==4) ? "Pontos Turísticos" : "Densidade Populacional";
    const char *name2 = (second==1)? "População" : (second==2)? "Área" : (second==3)? "PIB" : (second==4)? "Pontos Turísticos" : "Densidade Populacional";

    printf("\nAtributo 1: %s\n", name1);
    if (first == 1) { printf("  Carta 1 - %s: %lu\n  Carta 2 - %s: %lu\n", pais, populacao, pais2, populacao2); }
    else if (first == 2) { printf("  Carta 1 - %s: %.2f km²\n  Carta 2 - %s: %.2f km²\n", pais, area, pais2, area2); }
    else if (first == 3) { printf("  Carta 1 - %s: %.2f\n  Carta 2 - %s: %.2f\n", pais, pib, pais2, pib2); }
    else if (first == 4) { printf("  Carta 1 - %s: %d\n  Carta 2 - %s: %d\n", pais, pontoTuristico, pais2, pontoTuristico2); }
    else { printf("  Carta 1 - %s: %.2f hab/km²\n  Carta 2 - %s: %.2f hab/km²\n", pais, densidade, pais2, densidade2); }

    if (res1 == 0) printf("  Resultado: Empate neste atributo.\n"); else printf("  Resultado: Carta %d venceu neste atributo.\n", res1);

    printf("\nAtributo 2: %s\n", name2);
    if (second == 1) { printf("  Carta 1 - %s: %lu\n  Carta 2 - %s: %lu\n", pais, populacao, pais2, populacao2); }
    else if (second == 2) { printf("  Carta 1 - %s: %.2f km²\n  Carta 2 - %s: %.2f km²\n", pais, area, pais2, area2); }
    else if (second == 3) { printf("  Carta 1 - %s: %.2f\n  Carta 2 - %s: %.2f\n", pais, pib, pais2, pib2); }
    else if (second == 4) { printf("  Carta 1 - %s: %d\n  Carta 2 - %s: %d\n", pais, pontoTuristico, pais2, pontoTuristico2); }
    else { printf("  Carta 1 - %s: %.2f hab/km²\n  Carta 2 - %s: %.2f hab/km²\n", pais, densidade, pais2, densidade2); }

    if (res2 == 0) printf("  Resultado: Empate neste atributo.\n"); else printf("  Resultado: Carta %d venceu neste atributo.\n", res2);

    // --- soma dos atributos 
    float v1a = (first == 1) ? (float)populacao : (first == 2) ? area : (first == 3) ? pib : (first == 4) ? (float)pontoTuristico : densidade;
    float v1b = (second== 1) ? (float)populacao : (second== 2) ? area : (second== 3) ? pib : (second== 4) ? (float)pontoTuristico : densidade;
    float v2a = (first == 1) ? (float)populacao2 : (first == 2) ? area2 : (first == 3) ? pib2 : (first == 4) ? (float)pontoTuristico2 : densidade2;
    float v2b = (second== 1) ? (float)populacao2 : (second== 2) ? area2 : (second== 3) ? pib2 : (second== 4) ? (float)pontoTuristico2 : densidade2;

    float sum1 = v1a + v1b;
    float sum2 = v2a + v2b;

    printf("\nSoma dos atributos:\n");
    printf("  Carta 1 (%s): %.6f\n", pais, sum1);
    printf("  Carta 2 (%s): %.6f\n", pais2, sum2);

    if (sum1 > sum2) {
        printf("\nResultado final: Carta 1 (%s) venceu a rodada!\n", pais);
    } else if (sum2 > sum1) {
        printf("\nResultado final: Carta 2 (%s) venceu a rodada!\n", pais2);
    } else {
        printf("\nResultado final: Empate!\n");
    }

    return 0;
}

