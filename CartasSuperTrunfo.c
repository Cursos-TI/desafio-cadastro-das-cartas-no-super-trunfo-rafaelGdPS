#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int carta_1 = 1, carta_2 = 2;
    char estado_1, estado_2;
    char cd_Carta_1[10], cd_Carta_2[10];
    char nome_cidade_1[50], nome_cidade_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int num_pontos_turisticos_1, num_pontos_turisticos_2;

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

    printf("Digite o número de pontos turisticos: \n\n");
    scanf("%d", &num_pontos_turisticos_2);
    

    printf("Carta: %d  \n", carta_1);
    printf("Estado: %c \n", estado_1);
    printf("Código: %s \n", cd_Carta_1);
    printf("Nome da Cidade: %s \n", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %f \n", area_1);
    printf("PIB: %f \n", pib_1);
    printf("Número de Pontos Turísticos: %d \n\n", num_pontos_turisticos_1);

    printf("Carta: %d  \n", carta_2);
    printf("Estado: %c \n", estado_2);
    printf("Código: %s \n", cd_Carta_2);
    printf("Nome da Cidade: %s \n", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %f \n", area_2);
    printf("PIB: %f \n", pib_2);
    printf("Número de Pontos Turísticos: %d \n\n", num_pontos_turisticos_2);

    return 0;
}
