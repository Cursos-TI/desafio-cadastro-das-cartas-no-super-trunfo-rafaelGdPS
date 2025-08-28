#include <stdio.h>

float densidadePopulacao(int populacao, float area) {
    return area / populacao;
}

float pibPerCapita(int populacao, float pib) {
    return pib / populacao;
}

int main() {
    int carta_1 = 1, carta_2 = 2;
    char estado_1, estado_2;
    char cd_Carta_1[10], cd_Carta_2[10];
    char nome_cidade_1[50], nome_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int num_pontos_turisticos_1, num_pontos_turisticos_2;
    float densidade_populacional_1, densidade_populacional_2;
    float pib_percapita_1, pib_percapita_2;
    float super_poder_1, super_poder_2;

    printf("Carta %d\n", carta_1);

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado_1);
    
    printf("Digite codigo da carta: \n");
    scanf("%s", &cd_Carta_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade_1);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao_1);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &num_pontos_turisticos_1);

    printf("Carta %d\n", carta_2);

    printf("Digite o nome do estado: \n");
    scanf(" %c", &estado_2);
    
    printf("Digite codigo da carta:\n");
    scanf("%s", &cd_Carta_2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome_cidade_2);

    printf("Digite o numero da população: \n");
    scanf("%d", &populacao_2);

    printf("Digite o tamanho da área:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &num_pontos_turisticos_2);

    densidade_populacional_1 = densidadePopulacao(populacao_1, area_1);
    pib_percapita_1 = pibPerCapita(populacao_1, pib_1);
    super_poder_1 = populacao_1 + area_1 + pib_1 + num_pontos_turisticos_1 + (1/densidade_populacional_1) + pib_percapita_1;

    densidade_populacional_2 = densidadePopulacao(populacao_1, area_1);
    pib_percapita_2 = pibPerCapita(populacao_2, pib_2);
    super_poder_2 = populacao_2 + area_2 + pib_2 + num_pontos_turisticos_2 + (1/densidade_populacional_2) + pib_percapita_2;

    printf("Carta: %d  \n", carta_1);
    printf("Estado: %c \n", estado_1);
    printf("Código: %s \n", cd_Carta_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %f km² \n", area_1);
    printf("PIB: %f bilhões de reais \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n", num_pontos_turisticos_1);
    printf("Densidade Populacional: %f hab/km² \n", densidade_populacional_1);
    printf("PIB per Capita: %f reais \n", pib_percapita_1);
    printf("Super Poder: %u \n\n", super_poder_1);

    printf("Carta: %d  \n", carta_2);
    printf("Estado: %c \n", estado_2);
    printf("Código: %s \n", cd_Carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %f km² \n", area_2);
    printf("PIB: %f bilhões de reais \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n", num_pontos_turisticos_2);
    printf("Densidade Populacional: %f hab/km² \n", densidadePopulacao(populacao_2, area_2));
    printf("PIB per Capita: %f reais \n", pibPerCapita(populacao_2, pib_2));
    printf("Super Poder: %u \n\n", super_poder_1);

    printf("Comparação de Cartas: \n");
    printf("População: Carta %d venceu \n", populacao_1 > populacao_2);
    printf("Área: Carta %d venceu \n", area_1 > area_2);
    printf("PIB: Carta %d venceu \n", pib_1 > pib_2);
    printf("Pontos Turísticos: Carta %d venceu", num_pontos_turisticos_1 > num_pontos_turisticos_2);
    printf("Densidade Populacional: Carta %d \n", densidade_populacional_1 < densidade_populacional_2);
    printf("PIB per Capita: Carta %d venceu\n", pib_1 > pib_2);
    printf("Super Poder: Carta %d venceu", super_poder_1 > super_poder_2);

    return 0;
}
